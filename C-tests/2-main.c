int main() {
  volatile char *echo = (volatile char*) 0x0e000000;
  const char *grettings = "Hello World !\n";

  while (*grettings) {
    *echo = *grettings;
    grettings++;
  }
}
