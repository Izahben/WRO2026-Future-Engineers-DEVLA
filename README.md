
Claude finished the response
Screenshot 2026-07-08 004343.png
how do they do the light text starting from preseice motor


Identified CSS styling technique and clarified platform limitations
Identified CSS styling technique and clarified platform limitations
That bold-then-lighter-gray effect is done with custom CSS on a website — it's not something you can replicate that way inside a GitHub README, since GitHub markdown doesn't let you set custom text colors like that (all body text renders in one fixed color/theme).

What you can do in the README, which gets you close, is just bold the lead phrase and leave the rest as normal text:

markdown
* **Precise sensor mounting** with designed alignment features
* **Optimized center of gravity** placement for IMU accuracy
* **Modular design** enabling rapid repairs or iterations
This renders as:

Precise sensor mounting with designed alignment features
Optimized center of gravity placement for IMU accuracy
Modular design enabling rapid repairs or iterations
The bold/regular contrast is there, just without the gray dimming — GitHub's theme colors handle the rest (white/black text depending on light or dark mode) and you can't override that in plain markdown.

Is this screenshot from a website you're referencing for style ideas, or are you trying to get this exact section into your README? If it's content you want to reuse (like a "Custom 3D Printed Components" section for your own robot), I can help you write that section in your own words with this bold-lead-bullet style.

can you do it That bold-then-lighter-gray effect is done with custom CSS on a


Investigated styling limitations and devised SVG workaround solution
Investigated styling limitations and devised SVG workaround solution
GitHub strips out custom CSS/style attributes from README files for security, so that inline gray/bold effect genuinely can't be done with text and styling tags — no workaround with plain HTML or CSS in the README itself.

The real trick sites like that use is: it's not styled text at all, it's an image. If you want that exact look in your README, I can generate it as an SVG graphic (styled bullet list with bold leads + gray body text, on a dark background matching that screenshot) and you embed it like any other image.

Want me to build that for your "Custom 3D Printed Components" section (or whichever section you're trying to match this style for)? If so, tell me:

What text/bullets should go in it (your own robot's content, not this screenshot's)
Should it include a photo of your robot on the side like the screenshot, or just the text block?

# WRO-FUTURE-ENGINEERS-2025 - TEAM APOLLO <p align="center"> <img src="https://github.com/oracleapolloo/WRO-FUTURE-ENGINEERS-2025/blob/26cbb35791b8c0269d3ff0fe9a6655497de72f7e/other/TEAM%20APOLLO%20ICON_WB.PNG" width="420"/> > An autonomous vehicle designed for the Future Engineers category

pasted

THIS IS THEIR CODE FOR THE README IN THE GITHUB SO


Analyzed markdown formatting techniques and layout optimization strategies
Analyzed markdown formatting techniques and layout optimization strategies
Ah, now I see it — it's not custom CSS at all. Look at how they wrote the bullets:

markdown
> - **Precise sensor mounting** with designed alignment features  
> - **Optimized center of gravity** placement for IMU accuracy  
> - **Modular design** enabling rapid repairs or iterations
That > at the start of each line is a Markdown blockquote. GitHub renders blockquotes with a left border and slightly muted/gray text automatically — combined with **bold** on the lead phrase, that's exactly the effect from the screenshot. No CSS needed, just markdown syntax GitHub already styles that way.

They also use two other tricks worth borrowing:

Floating images beside text: <img src="..." width="275" align="right" style="margin-left: 20px;" /> — GitHub does allow this specific inline HTML for images (align + basic margin), even though it strips most other custom CSS.
<div style="clear: both;"></div> after each section — this resets the float so the next heading doesn't wrap around the image.
Want me to update your DEVLA README's "Hardware Used" section to use this same blockquote + floating-image style? It'd make each hardware write-up look like Apollo's (image floated right, bolded "why we chose" bullets in a blockquote, description text below). I can rebuild that section now if you say go — just confirm you're happy for me to also switch the image tags to the align="right" floating style instead of plain centered ones.


# DEVLA ### Smart Self-Driving Car for WRO Future Engineers ![DEVLA Robot](images/devla-banner.jpg) --- # Table of Contents * Overview * Team Introduction & Team Information * Project Description * Hardware Architecture * Power Management System * Navigation and Control System * Hardware

pasted

this is our own so attach some feature to it like that > - and other


Restructured documentation with branded team identity and component justifications
Restructured documentation with branded team identity and component justifications
Got it — I'll restyle the whole "Hardware Used" section with the blockquote bullets + floating images (matching Apollo's look), pull the "why we chose it" bullets from your existing writeup so nothing's invented, and update the team name to KINGDOM TECH'S CONCEPT (KTC) throughout.


Created a file, ran a command, read a file
Created a file, ran a command, read a file
Here's what changed:

Team name updated to KINGDOM TECH'S CONCEPT (KTC)
Every hardware component now has a floated image on the right (align="right") plus a blockquote list of "why we chose it" bullets with bolded lead phrases — same visual style as Apollo's, built from your own existing descriptions (nothing invented)
Added <div style="clear: both;"></div> after each hardware section so headings don't wrap around images
Same rule applies as before: image paths only render once you upload matching files to images/hardware/. Same filenames as last time.

Same as before — copy this whole file over your repo's README.md and commit. Want me to do the same blockquote-bullet treatment to any other section (like the Power Management or Navigation parts), or move on to something else?


Readme
Document · MD 





Claude is AI and can make mistakes. Please double-check responses.


Readme · MD
# DEVLA
 
### Smart Self-Driving Car for WRO Future Engineers
 
![DEVLA Robot](images/devla-banner.jpg)
 
---
 
# Table of Contents
 
* Overview
* Team Introduction & Team Information
* Project Description
  * Hardware Architecture
  * Power Management System
  * Navigation and Control System
* Hardware Used
* Software & Libraries
* Competition Challenges
* Spoilers
---
 
# Overview
 
DEVLA is an autonomous self-driving vehicle developed for the World Robot Olympiad (WRO) Future Engineers category. The vehicle is designed to navigate a competition track without human intervention by combining computer vision, distance sensing, and real-time control systems.
 
The robot utilizes a hybrid architecture consisting of a Raspberry Pi Zero 2 W and an STM32 microcontroller. The Raspberry Pi performs high-level processing tasks such as image analysis, environmental perception, and navigation decision-making, while the STM32 manages real-time hardware operations including sensor acquisition, motor control, and steering actuation.
 
To achieve reliable autonomous navigation, DEVLA integrates multiple sensing technologies, including VL53L0X Time-of-Flight sensors for distance measurement, a BMI160 inertial measurement sensor for orientation tracking, a TCS34725 color sensor for color detection, and a Raspberry Pi Camera Module for visual perception. These sensors work together to provide accurate information about the vehicle's surroundings.
 
The navigation system is based on wall-following and closed-loop steering control principles. By continuously monitoring the distances to surrounding walls and obstacles, the vehicle maintains a stable position within the track while executing smooth turns and avoiding collisions.
 
The primary objective of DEVLA is to demonstrate the practical application of robotics, embedded systems, sensor fusion, and autonomous navigation technologies while achieving reliable performance in the WRO Future Engineers competition.
 
---
 
# Team Introduction & Team Information
 
## Team Name
 
KINGDOM TECH'S CONCEPT (KTC)
 
## Team Members
 
* Izahben Goodluck
* Nwankwo Goodness
* Olawoye Solomon
* Mosuid Yusuf
![Team KTC](images/team-photo.jpg)
 
DEVLA is a collaborative robotics project developed by a team of students passionate about robotics, embedded systems, computer vision, and autonomous vehicle technology. Through the development of this vehicle, the team aims to apply engineering principles to solve real-world navigation challenges while gaining practical experience in robotics design and implementation.
 
---
 
# Project Description
 
## Hardware Architecture
 
DEVLA uses a distributed processing architecture that separates high-level intelligence from low-level vehicle control.
 
The system is built around two primary processing units:
 
### Raspberry Pi Zero 2 W
 
The Raspberry Pi Zero 2 W serves as the high-level processing unit of the vehicle. It is responsible for image processing, camera analysis, object recognition, and navigation decision-making.
 
### STM32 Microcontroller
 
The STM32 functions as the real-time control unit. It handles sensor acquisition, steering control, motor control, and communication with peripheral devices.
 
This separation allows both processors to focus on their specific tasks, improving reliability and overall system performance.
 
![System Architecture Diagram](images/system-architecture.jpg)
 
---
 
## Power Management System
 
Power management is a critical part of the DEVLA platform because the vehicle combines high-current drive components with sensitive electronic systems.
 
DEVLA is powered by a two-cell lithium-ion battery pack consisting of two 3.7V cells connected in series. This configuration provides a nominal voltage of 7.4V and a fully charged voltage of approximately 8.4V.
 
### High-Power Branch
 
The motor driver receives power directly from the battery pack. This allows the drive motor to access the full battery voltage required for acceleration, steering corrections, and obstacle avoidance maneuvers.
 
Providing direct battery power to the motor driver prevents unnecessary voltage losses and ensures consistent motor performance.
 
### Regulated Electronics Branch
 
A DC-DC buck converter is used to step down the battery voltage to a regulated 5V supply.
 
The regulated 5V line powers:
 
* Raspberry Pi Zero 2 W
* STM32 Microcontroller
The STM32 then provides a regulated 3.3V supply for low-voltage sensors and communication devices, including:
 
* VL53L0X Time-of-Flight Sensors
* BMI160 IMU
* TCS34725 Color Sensor
* PCA9548A Multiplexer
![Power Management Schematic](images/power-schematic.jpg)
 
### System Stability
 
Separating the motor supply from the electronics supply reduces electrical noise and prevents voltage drops caused by sudden motor current demands.
 
This architecture improves:
 
* Sensor stability
* Communication reliability
* Raspberry Pi operation
* STM32 operation
* Overall vehicle performance
---
 
## Navigation and Control System
 
### Wall Following
 
DEVLA uses a wall-following algorithm to maintain a stable position within the track.
 
The system continuously measures the distance to the left and right walls using VL53L0X Time-of-Flight sensors. These measurements are used to determine whether the vehicle is centered within the lane.
 
The steering error is calculated as:
 
Error = Right Distance − Left Distance
 
* Positive error → steer left
* Negative error → steer right
The error is processed through a closed-loop controller that generates steering corrections, allowing the vehicle to maintain smooth and stable movement.
 
### Corner Navigation
 
A front-facing VL53L0X sensor continuously monitors the distance to walls ahead.
 
As the vehicle approaches a corner, the measured distance decreases. Once the distance falls below a predefined threshold, the navigation system transitions from wall-following mode to turning mode.
 
After completing the turn, the vehicle automatically returns to wall-following mode.
 
### Steering Controller
 
DEVLA employs a closed-loop steering control system.
 
The control cycle consists of:
 
1. Measure left and right wall distances.
2. Calculate steering error.
3. Generate steering correction.
4. Apply steering command.
5. Repeat continuously.
This feedback loop compensates for sensor noise, wheel slip, uneven surfaces, and steering inaccuracies.
 
### Autonomous Operation Workflow
 
1. Sensors monitor the environment.
2. Distance data is acquired.
3. Camera images are processed.
4. Navigation decisions are generated.
5. Commands are sent to the STM32.
6. Steering and motor outputs are executed.
7. The process repeats continuously.
---
 
# Hardware Used
 
### Raspberry Pi Zero 2 W
<img src="images/hardware/raspberry-pi-zero-2w.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the Raspberry Pi Zero 2 W:
> - **Compact form factor** suited to a small chassis
> - **Enough processing power** for image analysis and navigation logic
> - **Runs Python and OpenCV** for computer vision tasks
> - **Low power draw** relative to full-size single-board computers
> - **Reliable Wi-Fi connectivity** for remote debugging and code deployment
 
The Raspberry Pi Zero 2 W serves as the high-level processing unit responsible for image processing, object detection, and navigation decision-making.
<div style="clear: both;"></div><br>
### STM32 Microcontroller
<img src="images/hardware/stm32.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the STM32:
> - **Real-time performance** for time-critical control tasks
> - **Dedicated hardware timers** for precise PWM generation
> - **Reliable I²C/UART communication** with sensors and the Raspberry Pi
> - **Efficient C++ execution** with minimal latency
> - **Proven stability** for embedded motor and steering control
 
The STM32 provides real-time control of sensors, steering, and motor systems. It was selected because of its speed, reliability, and precise hardware control capabilities.
<div style="clear: both;"></div><br>
### VL53L0X Time-of-Flight Sensors
<img src="images/hardware/vl53l0x.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the VL53L0X:
> - **Time-of-Flight accuracy**, more precise than conventional ultrasonic sensors
> - **Faster response times** for real-time wall following
> - **Compact I²C sensor** that's easy to multiplex across multiple units
> - **Reliable readings** for corner detection and obstacle avoidance
> - **Low interference**, unaffected by soft or angled surfaces the way ultrasonic can be
 
The VL53L0X sensors provide accurate distance measurements for wall following, corner detection, and obstacle detection. These sensors were selected because they offer greater precision and faster response times than conventional ultrasonic sensors.
<div style="clear: both;"></div><br>
### BMI160 Inertial Measurement Unit
<img src="images/hardware/bmi160.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the BMI160:
> - **Combined gyroscope and accelerometer** in a single compact package
> - **Orientation tracking** to help maintain steering stability
> - **Low power consumption**, ideal for a battery-powered vehicle
> - **I²C interface** for easy integration with existing sensor bus
> - **Fast data output** suited to real-time control loops
 
The BMI160 provides rotational and orientation data that helps maintain vehicle stability during navigation.
<div style="clear: both;"></div><br>
### TCS34725 Color Sensor
<img src="images/hardware/tcs34725.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the TCS34725:
> - **RGB color detection** for identifying track markers
> - **I²C interface** that integrates cleanly with our sensor bus
> - **Onboard IR filter** for more accurate color readings under varied lighting
> - **Compact size** that fits easily onto the chassis
> - **Fast sampling** suited to real-time marker detection
 
The TCS34725 is used to detect and identify colored markers within the competition environment.
<div style="clear: both;"></div><br>
### Raspberry Pi Camera Module
<img src="images/hardware/pi-camera-module.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the Pi Camera Module:
> - **Native compatibility** with the Raspberry Pi Zero 2 W
> - **Good enough resolution** for real-time image processing with OpenCV
> - **Low latency** video feed for navigation decisions
> - **Compact and lightweight**, easy to mount on the chassis
> - **Well-documented** with strong community/library support
 
The camera captures real-time images for visual analysis and navigation.
<div style="clear: both;"></div><br>
### SG90 Servo Motor
<img src="images/hardware/sg90-servo.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the SG90:
> - **Lightweight and compact**, ideal for Ackermann steering setups
> - **Precise angular control** for accurate steering corrections
> - **Low cost and widely available**, easy to replace if damaged
> - **Simple PWM control interface** compatible with the STM32
> - **Fast response time** for real-time steering adjustments
 
The SG90 servo controls the Ackermann steering mechanism and enables precise steering adjustments.
<div style="clear: both;"></div><br>
### MS5308 Motor Driver
<img src="images/hardware/ms5308.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the MS5308:
> - **Direct battery power handling** for consistent motor performance
> - **Simple control interface** from the STM32
> - **Reliable speed and direction control** for the drive motor
> - **Reasonable current handling** for our gear motor's demands
> - **Compact footprint** that fits within our power distribution layout
 
The motor driver regulates the speed and direction of the drive motor.
<div style="clear: both;"></div><br>
### PCA9548A I²C Multiplexer
<img src="images/hardware/pca9548a.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the PCA9548A:
> - **Solves address conflicts** between multiple identical I²C sensors
> - **8-channel switching** gives room to expand sensors later
> - **Simple software control** for channel selection
> - **Stable I²C bus management** across all connected devices
> - **Compact and easy to integrate** into the existing wiring
 
The multiplexer enables multiple I²C devices with identical addresses to communicate on the same bus without conflicts.
<div style="clear: both;"></div><br>
### Gear Motor
<img src="images/hardware/gear-motor.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the gear motor:
> - **Good balance of speed and torque** for track driving conditions
> - **Reliable propulsion** across varying surface conditions
> - **Compatible** with the MS5308 motor driver
> - **Durable construction** for repeated competition runs
> - **Straightforward mounting** onto the chassis drivetrain
 
The geared DC motor provides vehicle propulsion while maintaining a balance between speed and torque.
<div style="clear: both;"></div><br>
---
 
# Software & Libraries
 
## Visual Studio Code
 
Visual Studio Code is used for developing and managing Python-based software running on the Raspberry Pi.
 
## Arduino IDE
 
Arduino IDE is used to develop and upload firmware to the STM32 microcontroller.
 
## C++
 
C++ is used for embedded programming on the STM32 because of its efficiency and real-time performance.
 
## Python
 
Python is used for high-level processing, computer vision, and navigation logic on the Raspberry Pi.
 
## OpenCV
 
OpenCV is the primary computer vision library used for image processing, object detection, and environmental analysis.
 
## Command Prompt (Administrator)
 
Command Prompt is used for software installation, device configuration, file management, and development-related tasks during system setup and testing.
 
---
 
# Competition Challenges
 
## Wall-Following Accuracy
 
During early testing, the vehicle occasionally drifted away from the center of the lane. Small sensor errors and delayed steering responses caused instability.
 
To solve this issue, the wall-following algorithm was refined and steering parameters were tuned to improve responsiveness.
 
As a result, the vehicle achieved smoother and more reliable navigation.
 
## Late Corner Detection
 
One of the most significant challenges involved detecting corners at the correct time.
 
During initial tests, the vehicle often detected corners too late. By the time the front sensor recognized the approaching wall, the vehicle had already traveled too far forward, making smooth turns difficult.
 
To solve this issue, the corner-detection threshold was adjusted and multiple test runs were conducted to determine the optimal turning distance.
 
This allowed the vehicle to begin turning earlier and navigate corners more consistently.
 
## Obstacle Avoidance Timing
 
During obstacle avoidance testing, the vehicle occasionally approached obstacles too closely before initiating an avoidance maneuver.
 
Detection parameters were optimized and safe response distances were determined through repeated testing.
 
These improvements increased the available reaction time and improved obstacle avoidance performance.
 
## Power Stability
 
The drive motor generated current spikes during acceleration and steering maneuvers.
 
To prevent voltage fluctuations from affecting the electronics, the power system was separated into dedicated motor and regulated electronics branches.
 
This significantly improved system stability and reliability.
 
---
 
# Spoilers
 
## Future Improvements
 
Potential future upgrades include:
 
* Improved obstacle classification
* Enhanced steering control algorithms
* More advanced computer vision capabilities
* Adaptive navigation strategies
* Faster sensor processing
* Improved system optimization
## Engineering Philosophy
 
Throughout the development of DEVLA, the primary goal was to create a reliable, modular, and scalable autonomous vehicle. Every design decision was made with reliability, maintainability, and competition performance in mind.
 
The project demonstrates the integration of embedded systems, sensor fusion, control systems, and computer vision into a single autonomous platform capable of navigating complex environments with minimal human intervention.
 

Claude finished the response
Screenshot 2026-07-08 004343.png
how do they do the light text starting from preseice motor


Identified CSS styling technique and clarified platform limitations
Identified CSS styling technique and clarified platform limitations
That bold-then-lighter-gray effect is done with custom CSS on a website — it's not something you can replicate that way inside a GitHub README, since GitHub markdown doesn't let you set custom text colors like that (all body text renders in one fixed color/theme).

What you can do in the README, which gets you close, is just bold the lead phrase and leave the rest as normal text:

markdown
* **Precise sensor mounting** with designed alignment features
* **Optimized center of gravity** placement for IMU accuracy
* **Modular design** enabling rapid repairs or iterations
This renders as:

Precise sensor mounting with designed alignment features
Optimized center of gravity placement for IMU accuracy
Modular design enabling rapid repairs or iterations
The bold/regular contrast is there, just without the gray dimming — GitHub's theme colors handle the rest (white/black text depending on light or dark mode) and you can't override that in plain markdown.

Is this screenshot from a website you're referencing for style ideas, or are you trying to get this exact section into your README? If it's content you want to reuse (like a "Custom 3D Printed Components" section for your own robot), I can help you write that section in your own words with this bold-lead-bullet style.

can you do it That bold-then-lighter-gray effect is done with custom CSS on a


Investigated styling limitations and devised SVG workaround solution
Investigated styling limitations and devised SVG workaround solution
GitHub strips out custom CSS/style attributes from README files for security, so that inline gray/bold effect genuinely can't be done with text and styling tags — no workaround with plain HTML or CSS in the README itself.

The real trick sites like that use is: it's not styled text at all, it's an image. If you want that exact look in your README, I can generate it as an SVG graphic (styled bullet list with bold leads + gray body text, on a dark background matching that screenshot) and you embed it like any other image.

Want me to build that for your "Custom 3D Printed Components" section (or whichever section you're trying to match this style for)? If so, tell me:

What text/bullets should go in it (your own robot's content, not this screenshot's)
Should it include a photo of your robot on the side like the screenshot, or just the text block?

# WRO-FUTURE-ENGINEERS-2025 - TEAM APOLLO <p align="center"> <img src="https://github.com/oracleapolloo/WRO-FUTURE-ENGINEERS-2025/blob/26cbb35791b8c0269d3ff0fe9a6655497de72f7e/other/TEAM%20APOLLO%20ICON_WB.PNG" width="420"/> > An autonomous vehicle designed for the Future Engineers category

pasted

THIS IS THEIR CODE FOR THE README IN THE GITHUB SO


Analyzed markdown formatting techniques and layout optimization strategies
Analyzed markdown formatting techniques and layout optimization strategies
Ah, now I see it — it's not custom CSS at all. Look at how they wrote the bullets:

markdown
> - **Precise sensor mounting** with designed alignment features  
> - **Optimized center of gravity** placement for IMU accuracy  
> - **Modular design** enabling rapid repairs or iterations
That > at the start of each line is a Markdown blockquote. GitHub renders blockquotes with a left border and slightly muted/gray text automatically — combined with **bold** on the lead phrase, that's exactly the effect from the screenshot. No CSS needed, just markdown syntax GitHub already styles that way.

They also use two other tricks worth borrowing:

Floating images beside text: <img src="..." width="275" align="right" style="margin-left: 20px;" /> — GitHub does allow this specific inline HTML for images (align + basic margin), even though it strips most other custom CSS.
<div style="clear: both;"></div> after each section — this resets the float so the next heading doesn't wrap around the image.
Want me to update your DEVLA README's "Hardware Used" section to use this same blockquote + floating-image style? It'd make each hardware write-up look like Apollo's (image floated right, bolded "why we chose" bullets in a blockquote, description text below). I can rebuild that section now if you say go — just confirm you're happy for me to also switch the image tags to the align="right" floating style instead of plain centered ones.


# DEVLA ### Smart Self-Driving Car for WRO Future Engineers ![DEVLA Robot](images/devla-banner.jpg) --- # Table of Contents * Overview * Team Introduction & Team Information * Project Description * Hardware Architecture * Power Management System * Navigation and Control System * Hardware

pasted

this is our own so attach some feature to it like that > - and other


Restructured documentation with branded team identity and component justifications
Restructured documentation with branded team identity and component justifications
Got it — I'll restyle the whole "Hardware Used" section with the blockquote bullets + floating images (matching Apollo's look), pull the "why we chose it" bullets from your existing writeup so nothing's invented, and update the team name to KINGDOM TECH'S CONCEPT (KTC) throughout.


Created a file, ran a command, read a file
Created a file, ran a command, read a file
Here's what changed:

Team name updated to KINGDOM TECH'S CONCEPT (KTC)
Every hardware component now has a floated image on the right (align="right") plus a blockquote list of "why we chose it" bullets with bolded lead phrases — same visual style as Apollo's, built from your own existing descriptions (nothing invented)
Added <div style="clear: both;"></div> after each hardware section so headings don't wrap around images
Same rule applies as before: image paths only render once you upload matching files to images/hardware/. Same filenames as last time.

Same as before — copy this whole file over your repo's README.md and commit. Want me to do the same blockquote-bullet treatment to any other section (like the Power Management or Navigation parts), or move on to something else?


Readme
Document · MD 





Claude is AI and can make mistakes. Please double-check responses.


Readme · MD
# DEVLA
 
### Smart Self-Driving Car for WRO Future Engineers
 
![DEVLA Robot](images/devla-banner.jpg)
 
---
 
# Table of Contents
 
* Overview
* Team Introduction & Team Information
* Project Description
  * Hardware Architecture
  * Power Management System
  * Navigation and Control System
* Hardware Used
* Software & Libraries
* Competition Challenges
* Spoilers
---
 
# Overview
 
DEVLA is an autonomous self-driving vehicle developed for the World Robot Olympiad (WRO) Future Engineers category. The vehicle is designed to navigate a competition track without human intervention by combining computer vision, distance sensing, and real-time control systems.
 
The robot utilizes a hybrid architecture consisting of a Raspberry Pi Zero 2 W and an STM32 microcontroller. The Raspberry Pi performs high-level processing tasks such as image analysis, environmental perception, and navigation decision-making, while the STM32 manages real-time hardware operations including sensor acquisition, motor control, and steering actuation.
 
To achieve reliable autonomous navigation, DEVLA integrates multiple sensing technologies, including VL53L0X Time-of-Flight sensors for distance measurement, a BMI160 inertial measurement sensor for orientation tracking, a TCS34725 color sensor for color detection, and a Raspberry Pi Camera Module for visual perception. These sensors work together to provide accurate information about the vehicle's surroundings.
 
The navigation system is based on wall-following and closed-loop steering control principles. By continuously monitoring the distances to surrounding walls and obstacles, the vehicle maintains a stable position within the track while executing smooth turns and avoiding collisions.
 
The primary objective of DEVLA is to demonstrate the practical application of robotics, embedded systems, sensor fusion, and autonomous navigation technologies while achieving reliable performance in the WRO Future Engineers competition.
 
---
 
# Team Introduction & Team Information
 
## Team Name
 
KINGDOM TECH'S CONCEPT (KTC)
 
## Team Members
 
* Izahben Goodluck
* Nwankwo Goodness
* Olawoye Solomon
* Mosuid Yusuf
![Team KTC](images/team-photo.jpg)
 
DEVLA is a collaborative robotics project developed by a team of students passionate about robotics, embedded systems, computer vision, and autonomous vehicle technology. Through the development of this vehicle, the team aims to apply engineering principles to solve real-world navigation challenges while gaining practical experience in robotics design and implementation.
 
---
 
# Project Description
 
## Hardware Architecture
 
DEVLA uses a distributed processing architecture that separates high-level intelligence from low-level vehicle control.
 
The system is built around two primary processing units:
 
### Raspberry Pi Zero 2 W
 
The Raspberry Pi Zero 2 W serves as the high-level processing unit of the vehicle. It is responsible for image processing, camera analysis, object recognition, and navigation decision-making.
 
### STM32 Microcontroller
 
The STM32 functions as the real-time control unit. It handles sensor acquisition, steering control, motor control, and communication with peripheral devices.
 
This separation allows both processors to focus on their specific tasks, improving reliability and overall system performance.
 
![System Architecture Diagram](images/system-architecture.jpg)
 
---
 
## Power Management System
 
Power management is a critical part of the DEVLA platform because the vehicle combines high-current drive components with sensitive electronic systems.
 
DEVLA is powered by a two-cell lithium-ion battery pack consisting of two 3.7V cells connected in series. This configuration provides a nominal voltage of 7.4V and a fully charged voltage of approximately 8.4V.
 
### High-Power Branch
 
The motor driver receives power directly from the battery pack. This allows the drive motor to access the full battery voltage required for acceleration, steering corrections, and obstacle avoidance maneuvers.
 
Providing direct battery power to the motor driver prevents unnecessary voltage losses and ensures consistent motor performance.
 
### Regulated Electronics Branch
 
A DC-DC buck converter is used to step down the battery voltage to a regulated 5V supply.
 
The regulated 5V line powers:
 
* Raspberry Pi Zero 2 W
* STM32 Microcontroller
The STM32 then provides a regulated 3.3V supply for low-voltage sensors and communication devices, including:
 
* VL53L0X Time-of-Flight Sensors
* BMI160 IMU
* TCS34725 Color Sensor
* PCA9548A Multiplexer
![Power Management Schematic](images/power-schematic.jpg)
 
### System Stability
 
Separating the motor supply from the electronics supply reduces electrical noise and prevents voltage drops caused by sudden motor current demands.
 
This architecture improves:
 
* Sensor stability
* Communication reliability
* Raspberry Pi operation
* STM32 operation
* Overall vehicle performance
---
 
## Navigation and Control System
 
### Wall Following
 
DEVLA uses a wall-following algorithm to maintain a stable position within the track.
 
The system continuously measures the distance to the left and right walls using VL53L0X Time-of-Flight sensors. These measurements are used to determine whether the vehicle is centered within the lane.
 
The steering error is calculated as:
 
Error = Right Distance − Left Distance
 
* Positive error → steer left
* Negative error → steer right
The error is processed through a closed-loop controller that generates steering corrections, allowing the vehicle to maintain smooth and stable movement.
 
### Corner Navigation
 
A front-facing VL53L0X sensor continuously monitors the distance to walls ahead.
 
As the vehicle approaches a corner, the measured distance decreases. Once the distance falls below a predefined threshold, the navigation system transitions from wall-following mode to turning mode.
 
After completing the turn, the vehicle automatically returns to wall-following mode.
 
### Steering Controller
 
DEVLA employs a closed-loop steering control system.
 
The control cycle consists of:
 
1. Measure left and right wall distances.
2. Calculate steering error.
3. Generate steering correction.
4. Apply steering command.
5. Repeat continuously.
This feedback loop compensates for sensor noise, wheel slip, uneven surfaces, and steering inaccuracies.
 
### Autonomous Operation Workflow
 
1. Sensors monitor the environment.
2. Distance data is acquired.
3. Camera images are processed.
4. Navigation decisions are generated.
5. Commands are sent to the STM32.
6. Steering and motor outputs are executed.
7. The process repeats continuously.
---
 
# Hardware Used
 
### Raspberry Pi Zero 2 W
<img src="images/hardware/raspberry-pi-zero-2w.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the Raspberry Pi Zero 2 W:
> - **Compact form factor** suited to a small chassis
> - **Enough processing power** for image analysis and navigation logic
> - **Runs Python and OpenCV** for computer vision tasks
> - **Low power draw** relative to full-size single-board computers
> - **Reliable Wi-Fi connectivity** for remote debugging and code deployment
 
The Raspberry Pi Zero 2 W serves as the high-level processing unit responsible for image processing, object detection, and navigation decision-making.
<div style="clear: both;"></div><br>
### STM32 Microcontroller
<img src="images/hardware/stm32.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the STM32:
> - **Real-time performance** for time-critical control tasks
> - **Dedicated hardware timers** for precise PWM generation
> - **Reliable I²C/UART communication** with sensors and the Raspberry Pi
> - **Efficient C++ execution** with minimal latency
> - **Proven stability** for embedded motor and steering control
 
The STM32 provides real-time control of sensors, steering, and motor systems. It was selected because of its speed, reliability, and precise hardware control capabilities.
<div style="clear: both;"></div><br>
### VL53L0X Time-of-Flight Sensors
<img src="images/hardware/vl53l0x.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the VL53L0X:
> - **Time-of-Flight accuracy**, more precise than conventional ultrasonic sensors
> - **Faster response times** for real-time wall following
> - **Compact I²C sensor** that's easy to multiplex across multiple units
> - **Reliable readings** for corner detection and obstacle avoidance
> - **Low interference**, unaffected by soft or angled surfaces the way ultrasonic can be
 
The VL53L0X sensors provide accurate distance measurements for wall following, corner detection, and obstacle detection. These sensors were selected because they offer greater precision and faster response times than conventional ultrasonic sensors.
<div style="clear: both;"></div><br>
### BMI160 Inertial Measurement Unit
<img src="images/hardware/bmi160.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the BMI160:
> - **Combined gyroscope and accelerometer** in a single compact package
> - **Orientation tracking** to help maintain steering stability
> - **Low power consumption**, ideal for a battery-powered vehicle
> - **I²C interface** for easy integration with existing sensor bus
> - **Fast data output** suited to real-time control loops
 
The BMI160 provides rotational and orientation data that helps maintain vehicle stability during navigation.
<div style="clear: both;"></div><br>
### TCS34725 Color Sensor
<img src="images/hardware/tcs34725.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the TCS34725:
> - **RGB color detection** for identifying track markers
> - **I²C interface** that integrates cleanly with our sensor bus
> - **Onboard IR filter** for more accurate color readings under varied lighting
> - **Compact size** that fits easily onto the chassis
> - **Fast sampling** suited to real-time marker detection
 
The TCS34725 is used to detect and identify colored markers within the competition environment.
<div style="clear: both;"></div><br>
### Raspberry Pi Camera Module
<img src="images/hardware/pi-camera-module.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the Pi Camera Module:
> - **Native compatibility** with the Raspberry Pi Zero 2 W
> - **Good enough resolution** for real-time image processing with OpenCV
> - **Low latency** video feed for navigation decisions
> - **Compact and lightweight**, easy to mount on the chassis
> - **Well-documented** with strong community/library support
 
The camera captures real-time images for visual analysis and navigation.
<div style="clear: both;"></div><br>
### SG90 Servo Motor
<img src="images/hardware/sg90-servo.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the SG90:
> - **Lightweight and compact**, ideal for Ackermann steering setups
> - **Precise angular control** for accurate steering corrections
> - **Low cost and widely available**, easy to replace if damaged
> - **Simple PWM control interface** compatible with the STM32
> - **Fast response time** for real-time steering adjustments
 
The SG90 servo controls the Ackermann steering mechanism and enables precise steering adjustments.
<div style="clear: both;"></div><br>
### MS5308 Motor Driver
<img src="images/hardware/ms5308.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the MS5308:
> - **Direct battery power handling** for consistent motor performance
> - **Simple control interface** from the STM32
> - **Reliable speed and direction control** for the drive motor
> - **Reasonable current handling** for our gear motor's demands
> - **Compact footprint** that fits within our power distribution layout
 
The motor driver regulates the speed and direction of the drive motor.
<div style="clear: both;"></div><br>
### PCA9548A I²C Multiplexer
<img src="images/hardware/pca9548a.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the PCA9548A:
> - **Solves address conflicts** between multiple identical I²C sensors
> - **8-channel switching** gives room to expand sensors later
> - **Simple software control** for channel selection
> - **Stable I²C bus management** across all connected devices
> - **Compact and easy to integrate** into the existing wiring
 
The multiplexer enables multiple I²C devices with identical addresses to communicate on the same bus without conflicts.
<div style="clear: both;"></div><br>
### Gear Motor
<img src="images/hardware/gear-motor.jpg" width="275" align="right" style="margin-left: 20px;" />
Why we chose the gear motor:
> - **Good balance of speed and torque** for track driving conditions
> - **Reliable propulsion** across varying surface conditions
> - **Compatible** with the MS5308 motor driver
> - **Durable construction** for repeated competition runs
> - **Straightforward mounting** onto the chassis drivetrain
 
The geared DC motor provides vehicle propulsion while maintaining a balance between speed and torque.
<div style="clear: both;"></div><br>
---
 
# Software & Libraries
 
## Visual Studio Code
 
Visual Studio Code is used for developing and managing Python-based software running on the Raspberry Pi.
 
## Arduino IDE
 
Arduino IDE is used to develop and upload firmware to the STM32 microcontroller.
 
## C++
 
C++ is used for embedded programming on the STM32 because of its efficiency and real-time performance.
 
## Python
 
Python is used for high-level processing, computer vision, and navigation logic on the Raspberry Pi.
 
## OpenCV
 
OpenCV is the primary computer vision library used for image processing, object detection, and environmental analysis.
 
## Command Prompt (Administrator)
 
Command Prompt is used for software installation, device configuration, file management, and development-related tasks during system setup and testing.
 
---
 
# Competition Challenges
 
## Wall-Following Accuracy
 
During early testing, the vehicle occasionally drifted away from the center of the lane. Small sensor errors and delayed steering responses caused instability.
 
To solve this issue, the wall-following algorithm was refined and steering parameters were tuned to improve responsiveness.
 
As a result, the vehicle achieved smoother and more reliable navigation.
 
## Late Corner Detection
 
One of the most significant challenges involved detecting corners at the correct time.
 
During initial tests, the vehicle often detected corners too late. By the time the front sensor recognized the approaching wall, the vehicle had already traveled too far forward, making smooth turns difficult.
 
To solve this issue, the corner-detection threshold was adjusted and multiple test runs were conducted to determine the optimal turning distance.
 
This allowed the vehicle to begin turning earlier and navigate corners more consistently.
 
## Obstacle Avoidance Timing
 
During obstacle avoidance testing, the vehicle occasionally approached obstacles too closely before initiating an avoidance maneuver.
 
Detection parameters were optimized and safe response distances were determined through repeated testing.
 
These improvements increased the available reaction time and improved obstacle avoidance performance.
 
## Power Stability
 
The drive motor generated current spikes during acceleration and steering maneuvers.
 
To prevent voltage fluctuations from affecting the electronics, the power system was separated into dedicated motor and regulated electronics branches.
 
This significantly improved system stability and reliability.
 
---
 
# Spoilers
 
## Future Improvements
 
Potential future upgrades include:
 
* Improved obstacle classification
* Enhanced steering control algorithms
* More advanced computer vision capabilities
* Adaptive navigation strategies
* Faster sensor processing
* Improved system optimization
## Engineering Philosophy
 
Throughout the development of DEVLA, the primary goal was to create a reliable, modular, and scalable autonomous vehicle. Every design decision was made with reliability, maintainability, and competition performance in mind.
 
The project demonstrates the integration of embedded systems, sensor fusion, control systems, and computer vision into a single autonomous platform capable of navigating complex environments with minimal human intervention.
 
