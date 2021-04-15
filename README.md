# MG HECTOR/ELECTRA

Project Smartphone controlled car deals with the application of HC-05 Bluetooth Module,integrated chip i.e Motor driver, DC Motors & Ultrasonic Sensor.Credits goes to the Wrench that he made this project and showed on YOUTUBE where he Mentors viewers who wants to build a Smartphone Controlled Car using Bluetooth Module and Arduino where he gives command to arduino using an application.

There were modifications done in many different Sections of Project such as making car avoid obstacle using ultrasonic sensor and through LEDS,side signals are given according to the turn electra makes. Major elevation to the existing project is that electra runs on it own and if encouters any obstacle on its way, it will find its way and will move ahead in that direction.

![img1](https://user-images.githubusercontent.com/69771908/114747781-72705700-9d0e-11eb-96fd-b7f59df36b12.jpg)

## HARDWARE COMPONENTS AND LIBRARY

### LIBRARY

- For this project, we have used **NewPing_v1.9.1** library to take the advantage of ultrasonic sensor functions.

### COMPONENTS

- 4     X     [RUBBER WHEELS](https://www.amazon.ca/Geekstory-Gearbox-Motor-200RPM-Arduino/dp/B0828RRCJK/ref=sr_1_4?dchild=1&keywords=WHEELS+AND+DC+MOTOR&qid=1618462084&sr=8-4)
- 4     X     [DC MOTORS](https://www.amazon.ca/Geekstory-Gearbox-Motor-200RPM-Arduino/dp/B0828RRCJK/ref=sr_1_4?dchild=1&keywords=WHEELS+AND+DC+MOTOR&qid=1618462084&sr=8-4)
- 30    X     [JUMPER WIRES](https://www.amazon.ca/Multicolored-Breadboard-Dupont-Jumper-wires/dp/B0758DPL2C/ref=sr_1_34?dchild=1&keywords=jumper+cable+set+for+arduino&qid=1618461429&sr=8-34)
- 1     X     [ULTRASONIC SENSOR](https://www.amazon.ca/CANADUINO-Ultrasonic-Distance-Sensor-Raspberry/dp/B075CRBS56/ref=sr_1_11?dchild=1&keywords=Ultrasonic+sensor&qid=1618461687&sr=8-11)
- 1     X     [SERVO](https://www.amazon.ca/Miuzei-Motors-Helicopter-Airplane-Control/dp/B07Z16DWGW/ref=sr_1_1?dchild=1&keywords=KeeYees+SG90+9G+Micro+Servo+Motor+with+PCA9685+16+Channel+12+Bit+PWM+Servo+Motor+Driver+IIC+Module+for+Arduino+RC+Robot+Helicopter+Airplane+Remote+Control&qid=1618461776&sr=8-1)
- 1     X     [ARDUINO UNO](https://www.amazon.ca/Arduino-A000073-Uno-REV3-SMD/dp/B00PUOVSYS/ref=sr_1_7?dchild=1&keywords=ARDUINO+UNO&qid=1618461819&sr=8-7)
- 1     X     [MOTOR DRIVER](https://www.amazon.ca/PChero-Controller-Module-Stepper-Arduino/dp/B07GTCWN9Z/ref=sr_1_1_sspa?dchild=1&keywords=MOTOR+DRIVER&qid=1618461850&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUFFUlNTU0hJMlNURlomZW5jcnlwdGVkSWQ9QTA1MTQyMzAzN0tMSVhZVjNPRFVJJmVuY3J5cHRlZEFkSWQ9QTA3NzI2NTgySlZDRERSQzg4VDRXJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==)
- 2     X     [RED LEDS](https://www.amazon.ca/EDGELEC-120pcs-Lights-Diffused-Emitting/dp/B08FB727WX/ref=sr_1_7?dchild=1&keywords=red+led&qid=1618461908&sr=8-7)
- 1     X     [BREADBOARD](https://www.amazon.ca/Eiechip-Breadboard-Solderless-Prototype-Universal/dp/B07RN4BTDF/ref=sr_1_18?dchild=1&keywords=BREADBOARD+SMALL&qid=1618461942&sr=8-18)
- 12    X     [BATTERY (1.5V EACH)](https://www.amazon.ca/Energizer-L92SBP-8-Ultimate-Lithium-Battery/dp/B071CNQ3TG/ref=sr_1_1_sspa?dchild=1&keywords=1.5V+ENERGIZER&qid=1618461976&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUFVQzdIV0RYSVBINUMmZW5jcnlwdGVkSWQ9QTA2NjkwMTgxNTVWU09SVU1EN1pBJmVuY3J5cHRlZEFkSWQ9QTA2MzMwODIzT1NCNDMxQ01RMzNWJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==)
- 2     X     [RESISTOR (560 OHM)](https://www.amazon.ca/Projects-10EP512560Rca-560-Resistors-Pack/dp/B07ZTR3L7J/ref=sr_1_6?dchild=1&keywords=560+OHM+RESISTOR&qid=1618462002&sr=8-6)


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
 
![bluetooth](https://user-images.githubusercontent.com/69771908/114813853-2f46d000-9d70-11eb-835c-b25f7213f9a8.jpg)

 
## HARDWARE COMPONENTS

- 1     X     [HC-05 BLUETOOTH MODULE](https://www.amazon.ca/DSD-TECH-HC-05-Pass-Through-Communication/dp/B01G9KSAF6/ref=sr_1_1_sspa?dchild=1&keywords=HC-05+BLUETOOTH+MODULE&qid=1618462037&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEzRlhWTE40R0pNNEw0JmVuY3J5cHRlZElkPUEwNjc1NzQ0MVQxMEVRNktIUEpTMyZlbmNyeXB0ZWRBZElkPUEwNzYyNjIyM0dTMzhHUFo4VFBJMSZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=)
 
 All the other components and its mechanism will be the same except for the Ultrasonic sensor and servo will be of no use. 
 
 ## DESIGN AND MECHANISM
 
 <img width="329" alt="BLUETOOTH CONTROLLED" src="https://user-images.githubusercontent.com/69771908/114757686-650c9a00-9d19-11eb-9948-a999056a83e3.png">
 
 - **HC-05 BLUETOOTH MODULE**: This module is used to control electra according to the instructions given using smartphone application.

# FUTURE OF INNOVATION

This project has a strong possiblity of influencing the electronic gadgets that can be made by embedding this technology. It can also be a future start-up for toy cars or robo cars. 

# CREDITS

:point_right: **DR. TREVOR TOMESH**: For Sharing His Great Knowledge to Us and Showing the Applications of Various Different Electronic Components.

:point_right: **ALEX CLARKE**: Being a Best Lab Instructor and Always Ready to Help for Even a Tiny Thing and Also for Making Us Aspirant for the Project.

:point_right: **LEVI/PAYTON**: For Being a Best Friend as a Instructor and Solving Our Problems.

# FINAL VIDEO 

Click this link to check out the final video of [THE SHOWDOWN OF ELCTRA](https://youtu.be/YIb6OchHkYA)


 



