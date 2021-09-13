int x;
void setup() {
 Serial.begin(9600);
 Serial.setTimeout(1);
 pinMode(2, INPUT_PULLUP);
 pinMode(3, INPUT_PULLUP);
 pinMode(4, INPUT_PULLUP);
 pinMode(5, INPUT_PULLUP);
 pinMode(6, INPUT_PULLUP);
 pinMode(7, INPUT_PULLUP);
 pinMode(8, INPUT_PULLUP);
 pinMode(9, INPUT_PULLUP);


}
void loop() {
 if (digitalRead(2) == LOW){
 Serial.print(0);
 delay(200);
 }
  if (digitalRead(3) == LOW){
 Serial.print(1);
 delay(200);
 }
  if (digitalRead(4) == LOW){
 Serial.print(2);
 delay(200);
 }
  if (digitalRead(5) == LOW){
 Serial.print(3);
 delay(200);
 }
  if (digitalRead(6) == LOW){
 Serial.print(4);
 delay(200);
 }
  if (digitalRead(7) == LOW){
 Serial.print(5);
 delay(200);
 }
  if (digitalRead(8) == LOW){
 Serial.print(6);
 delay(200);
 }
  if (digitalRead(9) == LOW){
 Serial.print(7);
 delay(200);
 }
}
