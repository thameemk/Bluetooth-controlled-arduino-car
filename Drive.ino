
//This programme is written by @thameemk612


//The function defined in this programme is
//asper my connections. It may varie with
//your choice. So I request to change the 'LOW'
//and 'HIGH' values according to your connection


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

// Forward Function
void forward(){
  Serial.print("forward"); //to print on monitor
  digitalWrite(C1A, HIGH);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, HIGH);
  digitalWrite(C2B, LOW);

}

//Backward Function
void backward(){
  Serial.print("backward"); //to print on monitor
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, HIGH);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, HIGH);
}

// Left Function
void left(){
  Serial.print("Left"); //to print on monitor
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, HIGH);
  digitalWrite(C2A, HIGH);
  digitalWrite(C2B, LOW);
}

//Right Funtion
void right(){
  Serial.print("Right"); //to print on monitor
  digitalWrite(C1A, HIGH);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, HIGH);
}

//Stop Sunction
void Stop(){
  Serial.print("Stop"); //to print on monitor
  digitalWrite(C1A, LOW);
  digitalWrite(C1B, LOW);
  digitalWrite(C2A, LOW);
  digitalWrite(C2B, LOW);
}
