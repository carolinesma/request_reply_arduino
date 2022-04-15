void setup() {
   Serial.begin(9600);
}
void loop() {
    while(!Serial.available()) {     
      Serial.write(44);
      delay(100)    
    }
    
    while (Serial.read() == 10){
       Serial.write(20);
    }
}
