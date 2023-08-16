#include <stdio.h>
#include <string.h>

int main() {
  printf("WASM ready\n");
  return 42;
}

int getNum() {
  return 2;
}

int getDoubleNum(int x) {
  return x * 2;
}

char greeting[50];
char * greet(char * name){
    if (strlen(name) > 40){
        return "Name too long";
    }
    strcpy(greeting, "Hello ");
    return strcat(greeting, name);
}
