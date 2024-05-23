const http = require('http');
const fs = require('fs').promises; // Assuming 3-read_file_async uses promises

const args = process.argv.slice(2);
const DATABASE_FILE = args[0]; // Use a clearer variable name

const hostname = '127.0.0.1';
const port = 1245;

const app = http.createServer(async (req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/plain');
  const { url } = req;

  if (url === '/') {
    res.end('Hello Holberton School!');
  } else if (url === '/students') {
    res.write('This is the list of our students\n');
    try {
      const students = await fs.readFile(DATABASE_FILE, 'utf-8'); // Use fs.promises
      // Call a separate function to process and format students (optional)
      // const formattedStudents = formatStudents(students);
      res.end(students); // Assuming students data is already formatted
    } catch (error) {
      console.error(error); // Log error for debugging
      res.statusCode = 500; // Set internal server error status code
      res.end('Error reading student data');
    }
  } else {
    res.statusCode = 404;
    res.end('Not found');
  }
});

app.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}`);
});

module.exports = app;
