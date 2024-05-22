export default function cleanSet(set, startString) {
  if (!startString) {
    return '';
  }

  const cleanedValues = [];

  set.forEach((value) => {
    if (value.startsWith(startString)) {
      cleanedValues.push(value.slice(startString.length));
    }
  });

  return cleanedValues.join('-');
}
