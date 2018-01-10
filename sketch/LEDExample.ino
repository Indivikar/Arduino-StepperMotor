char data; //variable to store incoming data from JAVA 
int LEDpin = 8; //pin number LED is connected to
void setup() {
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(50);
}

void loop() {
  if(Serial.available()>0){ //if data has been written to the Serial stream
    data=Serial.read();
  
    if(data == 'd'){
      digitalWrite(8 ,HIGH);
      Serial.print("An");
    }
    
    if(data == '0') {
      digitalWrite(8 ,LOW);
      Serial.print("Aus");
    }
  }
}


