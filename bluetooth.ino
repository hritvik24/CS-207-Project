/*
              FINAL PROJECT

                           PROJECT  : SMARTPHONE/BLUETOOTH CONTROLLED ELECTRA
                           MADE BY  : HRITVIK B. PATEL
                                      JEEL B. PRAJAPTI
                           OLD CODE : http://bit.ly/2VexQ99
                           NEW CODE : WRITTEN BELOW

*/

// BELOW PINS CONTROL MOTOR DRIVER
const int L1 = 4;                                 //LEFT SIDE'S FORWARD MOTOR
const int L2 = 5;                                 //LEFT SIDE'S BACKWARD MOTOR
const int R1 = 6;                                 //RIGHT SIDE'S FORWARD MOTOR
const int R2 = 7;                                 //RIGHT SIDE'S BACKWARD MOTOR
const int led_right = 11;                         //LED PIN ATTACHED TO PIN 11
const int led_left = 12;                          //LED PIN ATTACHED TO PIN 12

char t;
void setup()
{
  pinMode(L1, OUTPUT);                           //MOTOR PINS ARE SET TO OUTPUT
  pinMode(L2, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(led_right, OUTPUT);                    //LED PINS ARE SET TO OUTPUT
  pinMode(led_left, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) 
  {
    t = Serial.read();
    Serial.println(t);
  }

  if (t == 'G')  
  {    
    digitalWrite(led_right, HIGH);              
    digitalWrite(led_left, HIGH);     
    digitalWrite(L1, HIGH);
    digitalWrite(L2, LOW);
    digitalWrite(R1, HIGH);
    digitalWrite(R2, LOW);
  }

  else if (t == 'F')        //MOVES IN BACKWARD DIRECTION AS IN REVERSE 
  {    
    digitalWrite(led_right, HIGH);              
    digitalWrite(led_left, HIGH);  
    digitalWrite(L1, LOW);
    digitalWrite(L2, HIGH);
    digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
  }

  else if (t == 'R')        //TURNS RIGHT AS LEFT MOTORS MOVE FORWARD AND RIGHT MOTORS MOVE BACKWARD 
  {  
    digitalWrite(led_right, LOW);  
    
    digitalWrite(L1, LOW);
  }

  else if (t == 'L')         //TURNS LEFT AS RIGHT MOTORS MOVE FORWARD AND LEFT MOTORS MOVE BACKWARD  
  { 
    digitalWrite(led_left, LOW);   
    digitalWrite(R1, HIGH);
    digitalWrite(R2, LOW);
    digitalWrite(L1, LOW);
    digitalWrite(L2, HIGH);
  }

  else if (t == 'S')        //STOPS ALL MOTORS
  {
    digitalWrite(led_right, HIGH);
    digitalWrite(led_left, HIGH);
    digitalWrite(L1, LOW);
    digitalWrite(L2, LOW);
    digitalWrite(R1, LOW);
    digitalWrite(R2, LOW);
  }
  delay(100);
}
