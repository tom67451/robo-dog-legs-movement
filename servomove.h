#include <Servo.h> //zahrnutí knihovny pro ovládání servo motoru
Servo jedna; //každý motor má svou instanci třídy Servo
Servo dva;
Servo tri;
Servo ctyri;
int pos = 0; //proměnná obsahující pozici motoru (úhel natočení)
int jede=0;
int dvojka=0;
int tre=165;
int ctyre=150;
void setup()
{ 
  Serial.begin(9600);

  jedna.attach(9);
  dva.attach(2);
  tri.attach(3);
  ctyri.attach(4);

}
void loop(){
//nahoru  
for(int jednicka=jede; jednicka<140; jednicka++){
jedna.write(jednicka);
jede=jednicka;
Serial.println(jede);
delay(15);
}

for(int dve=dvojka; dve<80; dve++){
dva.write(dve);
dvojka=dve;
Serial.println(dvojka);
delay(15);
}

for(int treti=tre; treti>100; treti--){
tri.write(treti);
tre=treti;
Serial.println(tre);
delay(15);
}

for(int ctvrty=ctyre; ctvrty>90; ctvrty--){
ctyri.write(ctvrty);
ctyre=ctvrty;
Serial.println(ctyre);
delay(15);
}




//dolu
for(int jednicka=jede; jednicka>70; jednicka--){
jedna.write(jednicka);
jede=jednicka;
Serial.println(jede);
delay(15);
}

for(int dve=dvojka; dve>10; dve--){
dva.write(dve);
dvojka=dve;
Serial.println(dvojka);
delay(15);
}

for(int treti=tre; treti<165; treti++){
tri.write(treti);
tre=treti;
Serial.println(tre);
delay(15);
}

for(int ctvrty=ctyre; ctvrty<150; ctvrty++){
ctyri.write(ctvrty);
ctyre=ctvrty;
Serial.println(ctyre);
delay(15);
}



    //myservo.write(140); //natočení motoru na aktuální úhel
    //delay(500);
    //yourservo.write(70);
  }
