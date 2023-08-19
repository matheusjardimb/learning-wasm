#emcc lib/program.c -s WASM=1 -o public/demo.js
#emcc lib/program.c -s WASM=1 -o public/demo.html
#emcc lib/program.c -s WASM=1 -s SIDE_MODULE=1 -o public/demo.wasm
#emcc lib/program.c -s WASM=1 -O3 -o public/demo.js

# add '_' to function names
#emcc lib/program.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_getNum','_main','_greet','_getDoubleNum']" -s EXPORTED_RUNTIME_METHODS="['ccall','cwrap']" -O3 -o public/demo.js
emcc lib/program.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_getNum','_main','_greet','_getDoubleNum','_getStr','_getNumDebugged']" -s EXPORTED_RUNTIME_METHODS="['ccall','cwrap']" -o public/demo.js
