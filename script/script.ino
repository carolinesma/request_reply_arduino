void setup() {
   Serial.begin(9600);
}
void loop() {
    while(!Serial.available()) {     
      Serial.write(10);
      delay(100);   
    }
    
    while (Serial.read() == 20){
       Serial.write(30);
    }
}
