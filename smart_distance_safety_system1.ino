const int sigPin = 9; // Both Trig and Echo are now on Pin 9
const int buzzer = 8;
const int led = 13;

long duration;
int distance;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 1. Set pin to OUTPUT to send the trigger pulse
  pinMode(sigPin, OUTPUT);
  digitalWrite(sigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(sigPin, HIGH);
  delayMicroseconds(5); // 3-pin sensors usually need 5-10us pulse
  digitalWrite(sigPin, LOW);

  // 2. Set pin to INPUT to listen for the echo
  pinMode(sigPin, INPUT);
  duration = pulseIn(sigPin, HIGH);

  // 3. Calculate distance
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // 4. Alert Logic
  if (distance <= 50 && distance > 0) {
    digitalWrite(led, HIGH);
    tone(buzzer, 1000); 
  } else {
    digitalWrite(led, LOW);
    noTone(buzzer);     
  }
  delay(100);
}