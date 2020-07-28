/*To get readings of Flex sensor*/
int a=A0;
int b=A1;
int c=A2;
void setup(){
  Serial.begin(9600);
}
void loop(){
  Serial.print(analogRead(a));
  Serial.print("\t");
  Serial.print(analogRead(b));
  Serial.print("\t");
  Serial.print(analogRead(c));
  Serial.print("\t");
  Serial.println();
  delay(100);
}
  
