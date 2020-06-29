void setup() {
for (int i = 8; i <= 13 ; i++) { 
  pinMode(i, OUTPUT);
}
}

void loop() {
for (int i = 8; i <= 13 ; i++) { 
  digitalWrite(i, HIGH); 
  delay(1000); 
}
for (int i = 13; i >= 8 ; i--) { 
  digitalWrite(i, LOW); 
  delay(1000);
}
}
