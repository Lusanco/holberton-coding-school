document.addEventListener("DOMContentLoaded", function () {
  function fetchHelloFromAPI() {
    const api = "https://hellosalut.stefanbohacek.dev/?lang=fr";
    const hello = document.getElementById("hello");

    fetch(api)
      .then((response) => response.json())
      .then((data) => {
        let frHello = data.hello;
        hello.innerText = frHello;
      })
      .catch((error) => {
        console.error("Error: ", error);
      });
  }

  fetchHelloFromAPI();
});
