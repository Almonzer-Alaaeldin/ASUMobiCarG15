byte leds[3] = {0,1,2} ;
float a,b,c ;
void setup() {
for(byte i=0 ; i<3 ; i++){
  pinMode(leds[i],OUTPUT) ; 
  }
}
void loop() {
  a = analogRead(0) ;
  b = analogRead(1) ;
  c = analogRead(2) ;
  if(a>b){
    if(a>c){
      digitalWrite(leds[0],HIGH) ; 
    }
    else{
      digitalWrite(leds[2],HIGH) ;
    }
  }
  else{
    if(b>c){
      digitalWrite(leds[1],HIGH) ;
    }
    else{
      digitalWrite(leds[2],HIGH) ;
    }
  }
}
