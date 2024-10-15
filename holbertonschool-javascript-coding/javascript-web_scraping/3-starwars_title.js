#!/usr/bin/node
const request = require('request');

// Write a script that prints the title of a Star Wars movie where the episode number matches a given integer.

// The first argument is the movie ID
// You must use the Star wars API with the endpoint https://swapi-api.hbtn.io/api/films/:id
/// / You must use the module request

// guillaume@ubuntu:~/$ ./3-starwars_title.js 1
// A New Hope
// guillaume@ubuntu:~/$ ./3-starwars_title.js 5
// Attack of the Clones
// guillaume@ubuntu:~/$

const movieID = process.argv[2];
const url = `https://swapi-api.hbtn.io/api/films/${movieID}`;

if (!movieID) {
  console.error('Error: Please provide an ID as an argument.');
  process.exit(1);
}

request(url, (error, response) => {
  if (error) {
    console.error(error.message);
    process.exit(1); // Exit with an error code
  } else {
    const data = JSON.parse(response.body);
    console.log(data.title);
  }
});
