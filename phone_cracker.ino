#include <Keyboard.h>

#define NUMDIGITS 4
#define IIDELAY 200 //inter-input delay, ms
#define NUMRETRIES 5 // per time-out cooldown
#define COOLDOWN 30 // seconds


void setup() {
  Keyboard.begin();
  delay(5000);
  char* message = "123123";
  Keyboard.print('\n');
  delay(1000);
  Keyboard.print('\n');
  delay(1000);
  for (char* c = message; *c != 0; c++) {
    Keyboard.print(*c);
    delay(IIDELAY);
  }
  Keyboard.print('\n');
}

void loop() {
  delay(1000);
}

void pad_zeros(int number, int digits, char* out_chars) {
  
}