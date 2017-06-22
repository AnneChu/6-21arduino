void setup() {
  // put your setup code here, to run once:
   for(int y = 0; y < 5; y++){
      pinMode(13-y, OUTPUT);
   }
}

void loop() {
  // put your main code here, to run repeatedly:
   for(int x = 0; x < 5; x++){
    digitalWrite(13-x, HIGH); 
   }
   delay(1000);
      for(int x = 0; x < 5; x++){
        digitalWrite(13-x, LOW);
        delay(1000); 
      }   
         for(int x = 0; x < 5; x++){
        digitalWrite(13-x, HIGH);  
        delay(1000); 
         }  
      for(int x = 0; x < 5; x++){
    digitalWrite(13-x, LOW); 
    }  
    delay(1000);
}
