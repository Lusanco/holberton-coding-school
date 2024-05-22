function addOnClick() {
  const myList = document.querySelector(".my_list");
  const addListItem = document.getElementById("add_item");

  addListItem.addEventListener("click", () => {
    const newItem = document.createElement("li");
    newItem.innerText = "Item";
    myList.appendChild(newItem);
  });
}

addOnClick();
