const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

console.log('Welcome to Holberton School, what is your name?');

rl.question('', (name) => {
  const trimmed = name.trim();
  console.log(`Your name is: ${trimmed || 'No name provided'}`);
  console.log('This important software is now closing');
  rl.close();
});
