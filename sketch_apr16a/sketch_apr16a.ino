
bool pulsador = LOW; // pulsador
int anterior = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // Red
  pinMode(3, OUTPUT); // Green
  pinMode(4, OUTPUT); // Blue
  pinMode(5, OUTPUT); // pulsador
}

void loop() {
  // put your main code here, to run repeatedly:
  pulsador = digitalRead(5);

     if (pulsador == HIGH and anterior == 0) {
     digitalWrite(2, HIGH);    
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     delay(500);
     anterior = 1;
     }
      
     else if(pulsador == HIGH and anterior== 1){
     digitalWrite(3, HIGH);   
     digitalWrite(2, LOW);
     digitalWrite(4, LOW);
     delay(500);
     anterior = 2;
     }
    
     else if(pulsador == HIGH and anterior == 2){
     digitalWrite(2, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(3, LOW);
     delay(500);
     anterior= 0;
     } 
}
