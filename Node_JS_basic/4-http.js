const http = require('http');

const app = http.createServer((req, res) => {
  res.writeHead(200);
  res.end('Hello Holberton School!');
});

const port = 1245;
app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});

module.exports = app;
