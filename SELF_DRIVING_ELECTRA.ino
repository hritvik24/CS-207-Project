/*

   FINAL PROJECT

                    PROJECT : ELECTRA- A OBSTACLE AVOIDING CAR

                    MADE BY : HRITVIK B. PATEL     200433229
                              JEEL PRAJAPTI        200422871

*/

#include <Servo.h>          //SERVO LIBRARY
#include <NewPing.h>        //ULTRASONIC SENSOR LIBRARY.

// BELOW PINS CONTROL MOTOR DRIVER
const int L1 = 7;                                 //LEFT SIDE'S FORWARD MOTOR
const int L2 = 6;                                 //LEFT SIDE'S BACKWARD MOTOR
const int R1 = 5;                                 //RIGHT SIDE'S FORWARD MOTOR
const int R2 = 4;                                 //RIGHT SIDE'S BACKWARD MOTOR
const int led_right = 11;                         //LED PIN ATTACHED TO PIN 11
const int led_left = 12;                          //LED PIN ATTACHED TO PIN 12

//FOLLOWIGN PINS ARE ANALOG PINS THAT READS INPUT FROM ULTRASONIC SENSOR
#define triger_pin A1
#define echo_pin A2


#define maximum_distance 207                           //MAXIMUM DISTANCE IS SET TO 207

boolean isForward = false;                              //TO CHECK IF CAR MOVED FORWARD
int distance = 100;                                     //DECLARING VARIABLE DISTANCE
int distanceofRight,distanceofLeft;                     //ECLARING VARIABLE FOR RIGHTSIDE AND LEFTSIDE DISTANCE

NewPing sonar(triger_pin, echo_pin, maximum_distance); //THIS FUNCTION READS INPUT FROM ULTRANSONIC SENSOR
Servo servo_motor;                                     //DECLARING SERVO MOTOR VARIABLE


void setup()
{
  pinMode(R1, OUTPUT);                                //SETTING 4 MOTOR PINS AS OUTPUT
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(led_right, OUTPUT);                         //SETTING 2 LED PINS AS OUTPUT
  pinMode(led_left, OUTPUT);
  
  servo_motor.attach(10);                             //SERVO PIN IS ATTACHED TO PIN 10
  servo_motor.write(90);                              //MAKES SERVO'S DIRECTION AT 90 DEGREE ANGLE.
  delay(2000);

  distance = readPing();                              //THIS FUNCTION READS PING FROM ULTRASONIC SENSOR AND RETURNS THE DISTANCE IT READ.
  delay(100);
}

void loop()
{
  distanceofRight = 0;                                //INITIALIZING VARIBLES OF DISTANCE ON RIGHT/LEFT
  distanceofLeft = 0;
  delay(50);
  
  if (distance <= 40)                                 //GETTING THE DISTANCE AND THEN CHECKING IF IT'S LESS THAN 40 THEN HECTOR(CAR) WILL STOP
                                                      //AND WILL TAKE A REVERSE AND USING SERVO, SENSOR READS FROM RIGHT SIDE AS WELL AS LEFT SIDE.
  { 
    Stop();                                           //STOPS ALL MOTORS
    delay(300);

    reverse();                                       //MAKES A REVERSE
    delay(400);

    Stop();                                           //STOPS ALL MOTORS
    delay(300);

    distanceofRight = Rightdistance();                //LOOKS RIGHT AND GET DISTANCE
    delay(300);

    distanceofLeft = Leftdistance();                  //LOOKS LEFT AND GET DISTANCE
    delay(300);

    if (distance >= distanceofLeft)                   //BASED ON DISTANCE IT READ, WILL DECIDE IF DISTANCE IS MORE THAN LEFTSIDE WHICH MEANS RIGHT SIDE IS MORE SPACIOUS.
    { 
      digitalWrite(led_right, LOW);
      goRight();
      Stop();
    }
    else                                              //ELSE LEFT SIDE IS MORE SPACIOUS
    {
      digitalWrite(led_left, LOW);
      goLeft();
      Stop();
    }
  }
  else                                               //ELSE KEEP MOVING UNTILL A HURDLE IS FOUND.
  {
    digitalWrite(led_right, HIGH);
    digitalWrite(led_left, HIGH);
    Forward();
  }

  distance = readPing();                             //GIVES BACK THE DISTANCE CONTINUOUSLY.
}

//FUCNCTION DEFINITIONS

int Rightdistance()                                      //FUNCTIONS MOVES SERVO AT 50 DEGREE TO READ DISTANCE FROM RIGHT SIDE AND RETURN THAT DISTANCE.
{
  servo_motor.write(40);
  delay(500);

  int distance = readPing();
  delay(100);

  servo_motor.write(90);
  return distance;
}

int Leftdistance()                                       //FUNCTION MOVES SERVO AT 170 DEGREE TO READ DISTANCE FROM LEFT SIDE AND RETURN THAT DISTANCE.
{
  servo_motor.write(150);
  delay(500);

  int distance = readPing();
  delay(100);

  servo_motor.write(90);
  return distance;
}

int readPing()                                     //FUNCTION READS DATA FROM ULTRASONIC SENSOR AND RETURNS THIS DATA BACK TO FUNCTION CALL
{
  delay(70);
  int distance_unit = sonar.ping_cm();

  if (distance_unit == 0)
  {
    distance_unit = 250;
  }

  return distance_unit;
}

void Stop()                                       //FUNCTION STOPS ALL MOTORS
{
  digitalWrite(R1, LOW);
  digitalWrite(L1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(L2, LOW);
}

void Forward()                                   //FUNCTION KEEPS ALL MOTORS STATUS AS HIGH
{
  if (!isForward)
  {
    isForward = true;
    digitalWrite(L1, HIGH);
    digitalWrite(R1, HIGH);
    digitalWrite(L2, LOW);
    digitalWrite(R2, LOW);
  }
}

void reverse()                                   //TAKES A REVERSE
{
  isForward = false;                             //ASSIGNS A FLASE TO VARIABLE AS CAR IS MOVING BACKWARD.
  digitalWrite(L2, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(L1, LOW);
  digitalWrite(R1, LOW);
}

void goRight()                                  //FUNCTION SETS MOTOR STATUS IN SUCN A WAY THAT CAR TURNS RIGHT
{
  digitalWrite(L1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, LOW);

  delay(200);

  digitalWrite(L1, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R2, LOW);
}

void goLeft()                                  //FUNCTION SETS MOTOR STATUS IN SUCN A WAY THAT CAR TURNS LEFT
{
  digitalWrite(L2, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(L1, LOW);
  digitalWrite(R2, LOW);

  delay(200);

  digitalWrite(L1, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R2, LOW);
} 
