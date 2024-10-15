#!/usr/bin/node
const fs = require('fs');

// Write a script that writes a string to a file.

// The first argument is the file path
// The second argument is the string to write
// The content of the file must be written in utf-8
// If an error occurred during while writing, print the error object

const filePath = process.argv[2];
const stringArg = process.argv[3];

if (!filePath) {
  console.error('Error: Please provide a file path as an argument.');
  process.exit(1);
}

fs.writeFile(filePath, stringArg, 'utf-8', (err) => {
  if (err) {
    // Convert error object to a more informative JSON-like format
    console.error({
      error: err
    });
  }
});
