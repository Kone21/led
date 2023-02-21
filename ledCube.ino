#define led_pin1 13
#define led_pin2 8
#define led_pin3 9
#define led_pin4 10
#define led_pin5 11
#define led_pin6 12
int var = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin6, OUTPUT);
  Serial.println("Enter num of LED(from 1 to 8 or 12, 23, 56...)");
}

void loop() {
  if (Serial.available() > 1) {
  var = Serial.parseInt();
  Serial.println(var);
  switch (var) {    
    case 1:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("1 led power up");
    break;
    case 2:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("2 led power up");
    break;
    case 3:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("3 led power up");
    break;
    case 4:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("4 led power up");
    break;
    case 5:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("5 led power up");
    break;
    case 6:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("6 led power up");
    break;
    case 7:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("7 led power up");
    break;
    case 8:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("8 led power up");
    break;
    case 12:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("1 and 2 leds power up");
    break;
    case 23:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("2 and 3 leds power up");
    break;
    case 14:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("1 and 4 leds power up");
    break;
    case 34:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("3 and 4 leds power up");
    break;
    case 56:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("5 and 6 leds power up");
    break;
    case 67:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("6 and 7 leds power up");
    break;
    case 78:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("7 and 8 leds power up");
    break;
    case 58:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("5 and 8 leds power up");
    break;
    case 15:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, LOW);
    Serial.println("1 and 5 leds power up");
    break;
    case 26:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, LOW);
    Serial.println("2 and 6 leds power up");
    break;
    case 37:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, LOW);
    Serial.println("3 and 7 leds power up");
    break;
    case 48:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, LOW);
    Serial.println("4 and 8 leds power up");
    break;
    case 123:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("1 and 2 and 3 leds power up");
    break;
    case 567:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("5 and 6 and 7 leds power up");
    break;
    case 1234:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("upper cube is powered up");
    break;
    case 5678:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, HIGH);
    digitalWrite(led_pin6, LOW);
    Serial.println("bottom cube is powered up");
    break;
    case 12345678:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, HIGH);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, HIGH);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, LOW);
    Serial.println("LEDCUBE is powered up");
    break;
    case 13:
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, HIGH);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, HIGH);
    Serial.println("diagonal");
    break;
    default:
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
    digitalWrite(led_pin3, LOW);
    digitalWrite(led_pin4, LOW);
    digitalWrite(led_pin5, LOW);
    digitalWrite(led_pin6, LOW);
    Serial.println("Input error");
    }
  }
}
