//Sketch C++

/*
  Develper: kathe
  Sketch descrpcion: Hello.ino
*/
int const LED =13;
#define LED 13
  void setup(){
    pinMode(LED,OUTPUT);
    Serial.begin(9600); //baudios
    digitalWrite(LED, LOW);
    Serial.print("HELLO");
    }

  void loop(){
      
    }
