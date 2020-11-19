int s = 40; //ihm sagen das mit s 0 gemeint ist usw...
int m = 21;
int h = 10;

void setup() {

  Serial.begin(1000000); //die geschwindigkeit angeben
}

void loop() {

  if (h < 10) Serial.print("Es ist 0");
  if (h > 9) Serial.print("Es ist "); //Text oder anders einfügen
  Serial.print(h);
  if (m < 10) Serial.print(":0");
  if (m > 9) Serial.print(":");
  Serial.print(m);
  if (s < 10) Serial.print(":0");
  if (s > 9) Serial.print(":");
  Serial.print(s);
  Serial.println(" Uhr");
  (s = s + 1);
  if (s == 60) {
    s = 0,  m = m + 1;
  }
  if (m == 60) {
    m = 0, h = h + 1;
  }
  if (h == 24) {
    h = 0;
  }

  delay(1000);
}
