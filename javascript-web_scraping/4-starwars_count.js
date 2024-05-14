#!/usr/bin/node
const request = require('request');

// Write a script that prints the number of movies where the character “Wedge Antilles” is present.

// The first argument is the API URL of the Star wars API: https://swapi-api.hbtn.io/api/films/
// Wedge Antilles is character ID 18 - your script must use this ID for filtering the result of the API
// You must use the module request

// guillaume@ubuntu:~/$ ./4-starwars_count.js https://swapi-api.hbtn.io/api/films
// 3
// guillaume@ubuntu:~/$

const url = process.argv[2];
const charID = 'https://swapi-api.hbtn.io/api/people/18/';

if (!url) {
  console.error('Error: Please provide a URL as an argument.');
  process.exit(1);
}

request(url, (error, response) => {
  if (error) {
    console.error(error.message);
    process.exit(1); // Exit with an error code
  } else {
    const data = JSON.parse(response.body);
    let count = 0;
    data.results.forEach(film => {
      if (film.characters.includes(charID)) {
        count++;
      }
    });
    console.log(count);
  }
});
