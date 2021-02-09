const int ldrPin = A0;
const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ldrPin,INPUT);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);
  if (ldrStatus <= 200) { 
    // value ambient saya sedikit lebih rendah. Karena cahaya diruangan berbeda2, 
    // jadi mari kita cari batasan rendahnya, dengan menutup LDR dengan tangan. Dapat dilihat nilai di monitor panel berubah.
    // Dapat disimpulkan bahwa value ambient terendah adalah 200
    // LED berhasil berkedip
    
    digitalWrite(ledPin,HIGH);
    Serial.print("it's DARK, Turn on LED!!: ");
    Serial.println(ldrStatus);
  } else {
    digitalWrite(ledPin, LOW);
    Serial.print("It's BRIGHT, Turn off the LED!!: ");
    Serial.println("ldrStatus");
  }
}
