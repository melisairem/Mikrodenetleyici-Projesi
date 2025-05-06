int led = 13;
char veri;

void setup() {
  // Seri iletişimi 9600 baud hızında başlatıyoruz.
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  // Seri portta okunabilir veri olup olmadığını kontrol ediyoruz.
  if (Serial.available() > 0) {
    // Seri porttan gelen veriyi okuyoruz.
    veri = Serial.read();
    // Gelen veri '1' ise LED'i yakıyoruz.
    if (veri == '1') {
      digitalWrite(led, HIGH);
    }
    // Gelen veri '0' ise LED'i söndürüyoruz.
    else if (veri == '0') {
      digitalWrite(led, LOW);
    }
    // Gelen veri '2' ise LED'i belirli bir süre yanıp söndürme işlemi yapıyoruz.
    else if (veri == '2') {
      // LED'i yakıyoruz.
      digitalWrite(led, HIGH); 
      // 2 saniye bekliyoruz.
      delay(2000);
      // LED'i söndürüyoruz.
      digitalWrite(led, LOW);
      // 2 saniye bekliyoruz.
      delay(2000);
      // LED'i tekrar yakıyoruz.
      digitalWrite(led, HIGH);
      // 2 saniye bekliyoruz.
      delay(2000);
      // LED'i tekrar söndürüyoruz.
      digitalWrite(led, LOW);
    }
  }
}

