// include the library code:
#include <LiquidCrystal.h>
const int Button1 = 26;
const int Button2 = 28;
const int Button3 = 30;
const int Button4 = 32;

int motor1pin1 = 36;
int motor1pin2 = 38;
int motor2pin1 = 40;
int motor2pin2 = 42;
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);                               

void setup() {
  // set up the LCD's number of columns and rows:
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT);
  pinMode(Button4, INPUT);
  lcd.begin(20, 4);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  int temp = digitalRead(Button1);
  int temp1 = digitalRead(Button2);
  int temp2 = digitalRead(Button3);
  int temp3 = digitalRead(Button4);
  
  if(temp == 1){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Starting");
  lcd.setCursor(0,1);
  lcd.print("----------------");
  lcd.setCursor(1,2);
  lcd.print("30 Degree Left");
  lcd.setCursor(1,3);
  lcd.print("Calf Raises");
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  delay(650);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  delay(650);
  lcd.clear();
    }
  else if(temp1 == 1){
    
  digitalWrite(motor2pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  delay(650);
  digitalWrite(motor2pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  delay(650);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Starting");
  lcd.setCursor(0,1);
  lcd.print("----------------");
  lcd.setCursor(1,2);
  lcd.print("30 Degree Right");
  lcd.setCursor(1,3);
  lcd.print("Calf Raises");
  lcd.clear();
    }
    
  else if(temp2 == 1){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Starting");
  lcd.setCursor(0,1);
  lcd.print("----------------");
  lcd.setCursor(1,2);
  lcd.print("60 Degree Left");
  lcd.setCursor(1,3);
  lcd.print("Calf Raises");
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  delay(1500);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  delay(1500);
  lcd.clear();
    }
  else if(temp3 == 1){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Starting");
  lcd.setCursor(0,1);
  lcd.print("----------------");
  lcd.setCursor(1,2);
  lcd.print("60 Degree Right");
  lcd.setCursor(1,3);
  lcd.print("Calf Raises");
  digitalWrite(motor2pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  delay(1500);
  digitalWrite(motor2pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  delay(1500);
  lcd.clear();
    }
  else if(temp == 0 || temp1 == 0 || temp2 == 0 || temp3 == 0){
  // Print a message to the LCD.
  lcd.setCursor(1,0);
  lcd.print("------------------");
  lcd.setCursor(5,1);
  lcd.print("FLEX10SION");
  lcd.setCursor(6,2);
  lcd.print("ROBOTICS");
  lcd.setCursor(1,4);
  lcd.print("------------------");
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
 
    }
}
