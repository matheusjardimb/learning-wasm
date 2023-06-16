void consoleNumLog(int n);
void consoleStringLog(char * msg);

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
  consoleStringLog("Hello from C");
}
