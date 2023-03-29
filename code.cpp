int i;
void setup() {
    for(i=2; i<11;i=i+1);{
        pinMode(i,OUTPUT);
    }
}

void loop() {
    for(i=2; i<11; i++) {
        digitalWrite(i,HIGH);
        delay(100);
        digitalWrite(i,LOW);
        delay(100);
    }
}