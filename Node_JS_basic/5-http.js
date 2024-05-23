const express = require('express');
// const fs = require('fs').promises;
const countStudents = require('./3-read_file_async');

const app = express();
const port = 1245;
const databaseFilePath = process.argv[2];

app.get('/', (req, res) => {
  res.type('text').send('Hello Holberton School!');
});

app.get('/students', async (req, res) => {
  try {
    const studentsData = await countStudents(databaseFilePath);
    res.type('text').send(`This is the list of our students\n${studentsData}`);
  } catch (err) {
    res.status(500).send('Internal Server Error');
  }
});

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});

module.exports = app;
