function fetchMovieFromAPI() {
  const api = "https://swapi-api.hbtn.io/api/films/?format=json";
  const listMovies = document.getElementById("list_movies");

  fetch(api)
    .then((response) => response.json())
    .then((data) => {
      const movies = data.results;
      movies.forEach((movie) => {
        const movieTitle = movie.title;
        const listItem = document.createElement("li");
        listItem.textContent = movieTitle;
        listMovies.appendChild(listItem);
      });
    })
    .catch((error) => {
      console.error("Error: ", error);
    });
}

fetchMovieFromAPI();
