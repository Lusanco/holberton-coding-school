export default function appendToEachArrayValue(array, appendString) {
  for (const item of array) {
    const value = appendString + item;
    array.splice(array.indexOf(item), 1, value);
  }

  return array;
}
