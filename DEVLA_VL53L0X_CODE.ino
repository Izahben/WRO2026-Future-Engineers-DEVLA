#include <Wire.h>
#include <VL53L0X.h>

// TCA9548A Multiplexer Address
#define TCA_ADDR 0x70

// TCA Channel Definitions (which channel each sensor is connected to)
#define CH_FRONT 4
#define CH_RIGHT 2
#define CH_LEFT 3
#define CH_BACK 1

// Create VL53L0X sensor objects for each direction
VL53L0X sensorFront;
VL53L0X sensorRight;
VL53L0X sensorLeft;
VL53L0X sensorBack;

// ─────────────────────────────────────────
// Function: tcaSelect()
// Purpose:  Selects a specific channel on the TCA9548A I2C multiplexer
// Input:    channel - number 0-7 corresponding to the mux channel
// Output:   None (sends I2C commands to switch the mux)
// ─────────────────────────────────────────
void tcaSelect(uint8_t channel) {
  if (channel > 7) return;  // Invalid channel, exit function

  Wire.beginTransmission(TCA_ADDR);  // Start communication with mux
  Wire.write(1 << channel);          // Send bitmask to enable selected channel
  Wire.endTransmission();            // End transmission (mux switches channel)
}

// ─────────────────────────────────────────
// Function: setup()
// Purpose:  Initializes serial communication, I2C bus, and all 4 sensors
// Input:    None
// Output:   None (prints status to serial monitor)
// ─────────────────────────────────────────
void setup() {
  Serial.begin(115200);  // Start serial communication at 115200 baud
  delay(1000);           // Wait for serial monitor to connect

  Serial.println("STM32 VL53L0X TEST");

  // Initialize I2C communication
  Wire.begin();          // Join I2C bus as master
  Wire.setClock(400000); // Set I2C clock speed to 400kHz (fast mode)

  // ────────── FRONT SENSOR INITIALIZATION ──────────
  tcaSelect(CH_FRONT);   // Switch mux to front sensor channel
  delay(50);             // Small delay for mux to settle

  if (!sensorFront.init()) {          // Try to initialize front sensor
    Serial.println("Front sensor FAIL");  // Print error if failed
    while (1);                         // Halt program on failure
  }

  sensorFront.setTimeout(500);       // Set 500ms timeout for readings
  sensorFront.startContinuous();     // Start continuous reading mode

  // ────────── RIGHT SENSOR INITIALIZATION ──────────
  tcaSelect(CH_RIGHT);   // Switch mux to right sensor channel
  delay(50);

  if (!sensorRight.init()) {
    Serial.println("Right sensor FAIL");
    while (1);
  }

  sensorRight.setTimeout(500);
  sensorRight.startContinuous();

  // ────────── LEFT SENSOR INITIALIZATION ──────────
  tcaSelect(CH_LEFT);    // Switch mux to left sensor channel
  delay(50);

  if (!sensorLeft.init()) {
    Serial.println("Left sensor FAIL");
    while (1);
  }

  sensorLeft.setTimeout(500);
  sensorLeft.startContinuous();

  // ────────── BACK SENSOR INITIALIZATION ──────────
  tcaSelect(CH_BACK);    // Switch mux to back sensor channel
  delay(50);

  if (!sensorBack.init()) {
    Serial.println("Back sensor FAIL");
    while (1);
  }
  
  sensorBack.setTimeout(500);
  sensorBack.startContinuous();

  Serial.println("ALL SENSORS READY");  // All sensors initialized successfully
}

// ─────────────────────────────────────────
// Function: loop()
// Purpose:  Continuously reads distance from all 4 sensors and prints values
// Input:    None
// Output:   Prints distances (cm) and timeout status to serial monitor
// ─────────────────────────────────────────
void loop() {

  // Variables to store distance readings (in millimeters)
  uint16_t d_front;
  uint16_t d_right;
  uint16_t d_left;
  uint16_t d_back;

  // ────────── READ FRONT SENSOR ──────────
  tcaSelect(CH_FRONT);                                    // Switch to front sensor
  d_front = sensorFront.readRangeContinuousMillimeters(); // Read distance (mm)

  // ────────── READ RIGHT SENSOR ──────────
  tcaSelect(CH_RIGHT);                                    // Switch to right sensor
  d_right = sensorRight.readRangeContinuousMillimeters(); // Read distance (mm)

  // ────────── READ LEFT SENSOR ──────────
  tcaSelect(CH_LEFT);                                    // Switch to left sensor
  d_left = sensorLeft.readRangeContinuousMillimeters();  // Read distance (mm)

  // ────────── READ BACK SENSOR ──────────
  tcaSelect(CH_BACK);                                    // Switch to back sensor
  d_back = sensorBack.readRangeContinuousMillimeters();  // Read distance (mm)

  // ────────── PRINT DISTANCE READINGS ──────────
  // Convert mm to cm by dividing by 10.0 for human-readable output
  Serial.print("F: ");
  Serial.print(d_front / 10.0);

  Serial.print(" cm | R: ");
  Serial.print(d_right / 10.0);

  Serial.print(" cm | L: ");
  Serial.print(d_left / 10.0);

  Serial.print(" cm | B: ");
  Serial.println(d_back / 10.0);

  // ────────── CHECK FOR TIMEOUTS ──────────
  // timeoutOccurred() returns true if any sensor reading timed out (>500ms)
  if (sensorFront.timeoutOccurred() ||  // Check front sensor timeout
      sensorRight.timeoutOccurred() ||  // Check right sensor timeout
      sensorLeft.timeoutOccurred() ||   // Check left sensor timeout
      sensorBack.timeoutOccurred()) {   // Check back sensor timeout
    
    Serial.println("TIMEOUT");          // Print warning if any sensor timed out
  }

  delay(200);  // Wait 200ms before next reading cycle (5Hz update rate)
}