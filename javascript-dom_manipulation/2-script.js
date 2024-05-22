function colorClassOnClick() {
  const header = document.querySelector("header");
  const clickHeader = document.getElementById("red_header");

  clickHeader.addEventListener("click", () => {
    header.style.color = "#FF0000";
    header.classList = "red";
  });
}
colorClassOnClick();
