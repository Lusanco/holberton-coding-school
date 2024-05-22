function updateOnClick() {
  const updateHeader = document.getElementById("update_header");

  updateHeader.addEventListener("click", () => {
    updateHeader.innerText = "New Header!!!";
  });
}

updateOnClick();
