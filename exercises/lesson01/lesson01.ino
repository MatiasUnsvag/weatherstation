/* Weather station
 * @author: Nikhil André Luthra - Bouvet Norge
 * @web: weather.labben.org
 * @web: bouvet.no / nikhil.luthra.no
 */
 
void setup() {
  // Initialiser serieport på 115200 bps
  //Dette skjer en gang på ved setup
  Serial.begin(115200);
  // Skriv ut melding til serieport
  Serial.println("Hello serial port");
}



void loop() {
  //dette skjer kontinuerlig i loops
  // Skriv ut melding til serieport
  Serial.println("Dette er en loop med delay");
  // Vent 2 sekunder
  delay(2000);

}
