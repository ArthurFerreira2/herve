// some experiments... and only experiments
// I know there are better algorithms to implement these functions
// the goal here is to test and break Herve



char asciiOfNum(int a) {
    return a + 48;
}



int mod(int number, int divisor){

  while(number >= divisor)
    number -= divisor;

  return number;
}



int div(int dividend, int divisor) {

  if (divisor == 0) return 0;

  int quotient = 0;

  while (dividend >= divisor) {
      dividend -= divisor;
      quotient++;
  }

  return quotient;
}



void _start() {

  volatile char *echo = (volatile char*) 0x0e000000;

  const char *grettings = "let's print interger values !\n";
  while (*grettings) {
    *echo = *grettings;
    grettings++;
  }

  // works only if (myInt >= 1 && myInt <= 99999)

  int myInt = 1972;
  int unit;
  char StringOfNumber[5];
  int cursor = 5;

  while(myInt > 0) {
    cursor--;
    unit = mod(myInt, 10);
    StringOfNumber[cursor] = asciiOfNum(unit);
    myInt = div(myInt, 10);
  }

  while (cursor < 5)
    *echo = StringOfNumber[cursor++];

  *echo = '\n';
}
