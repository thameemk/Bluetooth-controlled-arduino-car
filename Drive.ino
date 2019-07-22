char data=0;  //variable for storing recieved data

//Right Side
#define C1A 13
#define C1B 7
//Left Side
#define C2A 5
#define C2B 8

//Defining the Output Pin
void setup(){
    Serial.begin(9600);
    pinMode(C1A,OUTPUT);
    pinMode(C1B,OUTPUT);
    pinMode(C2A,OUTPUT);
    pinMode(C2B,OUTPUT);
}

//Function To Recieve Data From Bluetooth Device
void loop(){
  if (Serial.available()>0){
    data=Serial.read();
    Serial.println(data);
    if (data=='f')  //Move Forward
    forward();
    else if (data=='b') //Move Backward
      backward();
    else if (data=='r') //Move Right
      right();
    else if (data=='l') //Move Left
      left();
    else if (data== 's') //Stop the Robo
      Stop();
  }
}
