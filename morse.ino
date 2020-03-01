#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int led = 13;
const int buzzer = 8;
String code = "";
int len = 0;
char ch;
char new_char;
int unit_delay = 250;
int letterDelay = 1000;
void dot()
{
  Serial.print(".");
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(unit_delay);
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
  delay(unit_delay);
}

void dash()
{
  Serial.print("-");
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(unit_delay * 3);
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
  delay(unit_delay);
}

void morse()
{
  if (ch == 'A' || ch == 'a')
  {
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'B' || ch == 'b')
  {
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'C' || ch == 'c')
  {
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'D' || ch == 'd')
  {
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'E' || ch == 'e')
  {
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'f' || ch == 'f')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'G' || ch == 'g')
  {
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'H' || ch == 'h')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'I' || ch == 'i')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'J' || ch == 'j')
  {
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'K' || ch == 'k')
  {
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'L' || ch == 'l')
  {
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'M' || ch == 'm')
  {
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'N' || ch == 'n')
  {
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'O' || ch == 'o')
  {
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'P' || ch == 'p')
  {
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'Q' || ch == 'q')
  {
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'R' || ch == 'r')
  {
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'S' || ch == 's')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'T' || ch == 't')
  {
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'U' || ch == 'u')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'V' || ch == 'v')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'W' || ch == 'w')
  {
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'X' || ch == 'x')
  {
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'Y' || ch == 'y')
  {
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == 'Z' || ch == 'z')
  {
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '0')
  {
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '1')
  {
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '2')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '3')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '4')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '5')
  {
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '6')
  {
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '7')
  {
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '8')
  {
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if (ch == '9')
  {
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dash();
    delay(unit_delay);
    dot();
    delay(unit_delay);
    Serial.print(" ");
    delay(letterDelay);
  }
  else if(ch == ' ')
  {
    delay(unit_delay*7);
    Serial.print("/ ");
  }
  else
    Serial.println("");
}

void String2Morse()
{
  len = code.length();
  for (int i = 0; i < len; i++)
  {
    ch = code.charAt(i);
    morse();
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.println("Type: ");
  lcd.begin(16, 2);
  lcd.print("MEXT: Morse Code");
  //lcd.setCursor(0,1);
  //lcd.print("Translator");
}

void loop() {
  while (Serial.available())
  {
    lcd.clear();
    code = Serial.readString();
    Serial.print(code);
    lcd.print(code);
    Serial.print(": ");
    String2Morse();
    Serial.println("");
    lcd.clear();
    lcd.begin(16, 2);
    lcd.print("MEXT: Morse Code");
    //lcd.setCursor(0,1);
    //lcd.print("Translator");
  }
  delay(1000);
}
