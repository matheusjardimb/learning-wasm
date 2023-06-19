#emcc lib/program.c -s WASM=1 -o public/demo.js
#emcc lib/program.c -s WASM=1 -o public/demo.html
#emcc lib/program.c -s WASM=1 -s SIDE_MODULE=1 -o public/demo.wasm
emcc lib/program.c -s WASM=1 -O3 -o public/demo.js
