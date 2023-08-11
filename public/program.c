#include <string.h>

void consoleNumLog(int n);
void consoleStringLog(char * offset, int length);

int main() {
  return 42;
}

int getDoubleNumber(int x) {
  return x * 2;
}

void logDoubleNumber(int x) {
  consoleNumLog(x * 2);
}

void greet() {
  char * msg = "Hello from C";
  consoleStringLog(msg, strlen(msg));
}
