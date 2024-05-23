const http = require('http');
const fs = require('fs').promises; // Use promises for asynchronous operations

const app = http.createServer((req, res) => {
  const { url } = req;

  // Function to count students and categorize by program (assuming logic from 3-read_file_async.js)
  async function countStudents(filePath) {
    try {
      const data = await fs.readFile(filePath, 'utf-8');
      const lines = data.trim().split('\n');
      const students = lines.slice(1).filter((line) => line.trim() !== '');

      const fields = {};
      for (const student of students) {
        const [firstName, , , field] = student.split(',');
        if (fields[field]) {
          fields[field].count += 1;
          fields[field].students.push(firstName);
        } else {
          fields[field] = {
            count: 1,
            students: [firstName],
          };
        }
      }

      return fields; // Return program data object
    } catch (err) {
      if (err.code === 'ENOENT') {
        throw new Error('Cannot load the database');
      } else {
        throw err;
      }
    }
  }

  // Function to format student data for response (modify as needed)
  function formatStudents(programData) {
    let message = '';
    if (programData) {
      message += `Number of students: ${Object.values(programData).reduce(
        (acc, { count }) => acc + count,
        0,
      )}\n`;
      Object.entries(programData).forEach(([program, { count, students }]) => {
        message += `Number of students in ${program}: ${count}. List: ${students.join(
          ', ',
        )} \n`;
      });
    }
    return message;
  }

  if (url === '/') {
    res.writeHead(200);
    res.end('Hello Holberton School!');
  } else if (url === '/students') {
    const filePath = process.argv[2]; // Database file path from argument
    if (!filePath) {
      res.writeHead(400); // Bad request - no file path provided
      res.end('Missing database file path');
      return;
    }

    countStudents(filePath)
      .then((programData) => {
        const message = `This is the list of our students\n${formatStudents(
          programData,
        )}`;
        res.writeHead(200);
        res.end(message);
      })
      .catch((err) => {
        console.error(err); // Log error for debugging
        res.writeHead(500); // Internal server error
        res.end('Error reading student data');
      });
  } else {
    res.writeHead(404); // Not found
    res.end('Not found');
  }
});

const port = 1245;
app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});

module.exports = app;
