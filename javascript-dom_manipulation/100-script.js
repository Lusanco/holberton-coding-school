document.addEventListener("DOMContentLoaded", function () {
  const list = document.querySelector(".my_list");
  const addListItem = document.getElementById("add_item");
  const removeListItem = document.getElementById("remove_item");
  const clearListItems = document.getElementById("clear_list");

  addListItem.addEventListener("click", addItem);
  removeListItem.addEventListener("click", removeItem);
  clearListItems.addEventListener("click", clearList);

  function addItem() {
    const newItem = document.createElement("li");
    newItem.textContent = "Item";
    list.appendChild(newItem);
  }

  function removeItem() {
    const lastItem = list.lastElementChild;
    if (lastItem) {
      list.removeChild(lastItem);
    }
  }

  function clearList() {
    while (list.firstChild) {
      list.removeChild(list.firstChild);
    }
  }
});
