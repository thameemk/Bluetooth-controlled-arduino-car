char data=0;  //variable for storing recieved data

#define C1A 13  //right side 
#define C1B 7
#define C2A 5  //left side
#define C2B 8

void setup(){
    Serial.begin(9600);
    pinMode(C1A,OUTPUT);
    pinMode(C1B,OUTPUT);
    pinMode(C2A,OUTPUT);
    pinMode(C2B,OUTPUT);
}
