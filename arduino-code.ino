#include <dht.h> 
// importe la librairie du capteur DHT11


#define dht_apin A2 
// Définit le pin auquel est relié la capteur DHT11
 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);// 
  Ligne pour se connecter à l'ordinateur et au module bluetooth
  delay(500);
}
 
void loop(){
    DHT.read11(dht_apin);
    //Récupère les valeurs de la température et humidité
    Serial.println(String(int(DHT.temperature-3))+"A"+String(int(DHT.humidity+10))+"A");
    //Envoie les informations de la température et humoidité séparé d'un A.
    delay(500);
}
