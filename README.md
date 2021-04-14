# MG HECTOR/ELECTRA

Project Smartphone controlled car deals with the application of HC-05 Bluetooth Module,integrated chip i.e Motor driver, DC Motors & Ultrasonic Sensor.Credits goes to the Wrench that he made this project and showed on YOUTUBE where he Mentors viewers who wants to build a Smartphone Controlled Car using Bluetooth Module and Arduino where he gives command to arduino using an application.

There were modifications done in many different Sections of Project such as making car avoid obstacle using ultrasonic sensor and through LEDS,side signals are given according to the turn electra makes. Major elevation to the existing project is that electra runs on it own and if encouters any obstacle on its way, it will find its way and will move ahead in that direction.

![img1](https://user-images.githubusercontent.com/69771908/114747781-72705700-9d0e-11eb-96fd-b7f59df36b12.jpg)

## HARDWARE COMPONENTS AND LIBRARY

### LIBRARY

- For this project, we have used **NewPing_v1.9.1** library to take the advantage of ultrasonic sensor functions.

### COMPONENTS

- 4     X     RUBBER WHEELS
- 4     X     DC MOTORS
- 30    X     JUMPER WIRES
- 1     X     ULTRASONIC SENSOR
- 1     X     SERVO
- 1     X     ARDUINO UNO
- 1     X     MOTOR DRIVER
- 2     X     RED LEDS 
- 1     X     BREADBOARD
- 12    X     BATTERY (1.5V EACH)


## DESIGN AND MECHANISM FOR SELF DRIVING ELECTRA:robot:

![i1](https://user-images.githubusercontent.com/69771908/114759497-79519680-9d1b-11eb-94f7-a71cb108fe47.jpeg)




- **MOTOR DRIVER**: The Red chip is the Motor Driver where motors pins are connected and                 it is also given a power of 9v as it operates in range of 7-12V.

- **ARDUINO UNO**: It is microcontroller board where all the base connections are                      made on. Four pins 4,5,6,7(motor pins) are connected to Motor                       Driver to give a status of HIGH OR LOW to the motors attached.

- **DC MOTOR**: Two of the motors on right are connected with each other and is attached on RIGHT part of motor driver and same things is done for the other two motors on left.

- **BREADBOARD**: The ground and 5v is given through Breadboard.

- **LED**: Two of the Red Led are used to show which way the car will make the turn by blinking itself.

- **JUMPER WIRES**: All the components of this project are interconnected using jumper wires. Eg Male to Male, Male to Female, Female to Female wires

- **ULTRASONIC SENSOR**: Sensor over here, mounted on servo is able to read distance from right and left side respectively with the help of NewPing library functions.

- **SERVO**: Servo's Functionality is to rotate 'x' degree right side and 'y' degree left side when it detects object otherwise it will be at 90 degree angle. For the project               x =40   and y=150.  
  
- **RESISTOR**: Two 560 ohm resistors to save LEDS from burnings.

<img width="390" alt="SELFDRIVING" src="https://user-images.githubusercontent.com/69771908/114755277-b2d3d300-9d16-11eb-9cc8-c533684eeff7.png">

# SMARTPHONE CONTROLLED ELECTRA

Changes were also brought to this section of porject that is making electra work on our commmand. Basic code of it used two DC motors to rotate the car, in this project we used 4 of the DC motors to turn around. Additionaly placed LEDS whose functionality acts similar to the above one. 
 
 
 IMAGE OF ELECTRA WITH HC-05
 
 
## HARDWARE COMPONENTS

- 1     X     HC-05 BLUETOOTH MODULE
 
 All the other components and its mechanism will be the same except for the Ultrasonic sensor and servo will be of no use. 
 
 ## DESIGN AND MECHANISM
 
 <img width="329" alt="BLUETOOTH CONTROLLED" src="https://user-images.githubusercontent.com/69771908/114757686-650c9a00-9d19-11eb-9948-a999056a83e3.png">
 
 - **HC-05 BLUETOOTH MODULE**: This module is used to control electra according to the instructions given using smartphone application.

# FUTURE OF INNOVATION

This project has a strong possiblity of influencing the electronic gadgets that can be made by embedding this technology. It can also be a future start-up for toy cars or robo cars. 

# CREDITS

:point_right: **DR. TREVOR TOMESH**: FOR SHARING HIS GREAT KNOWLEDGE TO US AND SHOWING THE APPLICATIONS OF VARIOUS DIFFERENT ELECTRONIC COMPONENTS.

:point_right: **ALEX CLARKE**: BEING A BEST LAB INSTRUCTOR AND ALWAYS READY TO HELP FOR EVEN A TINY THING AND ALSO FOR MAKING US ASPIRANT FOR THE PROJECT

:point_right: **LEVI/PAYTON**: FOR BEING A BEST FRIEND AS A INSTRUCTOR AND SOLVING OUR PROBLEMS.



 



