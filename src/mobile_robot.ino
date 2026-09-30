#include <Servo.h>

//le potentiomètre 1 contrôle les deux moteurs
//le potentiomètre 2 contrôle le servomoteur
//utilisation = voiture commandée à trois roues

int pinMoteur1=3;		//Moteur 1 connecté en PIN3 (PWM)
int pinMoteur2=6;		//Moteur 2 connecté en PIN6 (PWM)
int potentiometre1 = 0;	//potentiomètre sur PIN 0
int potentiometre2 = 1;	//potentiomètre sur PIN 1
int valeurpot1;			//valeur potentiomètre 1
int valeurpot2;			//valeur potentiomètre 2
int rpm = 35;			//valeur de la fréquence de rotation
Servo servomoteur;		//Servomoteur

void setup(){
  
  	Serial.begin(9600);
    pinMode(pinMoteur1,OUTPUT);
  	pinMode(pinMoteur2,OUTPUT);
  	servomoteur.attach(9);		//Défini le PIN 9 comme servomoteur

}
void loop(){
  
 //maper le potentiomètre 1
  	int valeurpot1 = analogRead(potentiometre1);
  	valeurpot1 = map(valeurpot1, 0, 1023, 0, rpm);
  
  //maper le potentiomètre 2 
  	int valeurpot2 = analogRead(potentiometre2);
  	valeurpot2 = map(valeurpot2, 0, 1023, 0, 180);
  
 //Controle dans le moniteur de série 
  	Serial.println(valeurpot1);
  	Serial.println(valeurpot2);
  	delay(15);
  
 //transférer la valeur du potentiomètre 1 aux moteurs
    analogWrite(pinMoteur1,valeurpot1); 
  	analogWrite(pinMoteur2,valeurpot1); 
 	delay(15);
  
 //transférer la valeur au servomoteur
  	servomoteur.write(valeurpot2);
}