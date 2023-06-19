#include <stdio.h>
#include <string.h>
#include <emscripten.h>

EM_JS(void, jsFunction, (int n), {
    console.log("Call from EM_JS " + n);
} )

int main() {
  printf("WASM ready\n");

  emscripten_run_script("console.log('hello from c')");
  emscripten_async_run_script("console.log('alert async from c')", 2000);

  int getJSNum = emscripten_run_script_int("getJSNum()");
  printf("getJSNum %d\n", getJSNum);

  char * getJSStr = emscripten_run_script_string("getJSStr()");
  printf("getJSStr %s\n", getJSStr);

  jsFunction(234);

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
