const express = require('express')
const app = express();

app.use(express.static('public', {
    setHeaders: (resp, path, stat) => {
        if (path.endsWith('.wasm')) {
            resp.setHeader('Content-Type', 'application/wasm');
        }
    }
}))

app.listen(2222, () => console.log('Server running at 2222'));
