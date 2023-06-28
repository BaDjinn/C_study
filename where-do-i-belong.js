function getIndexToIns(arr, num) {
  /* Sorting arr */
  let newArr = arr.slice();
  let cond = true;
  let count = 0;
  const arrLen = newArr.length;

  while (cond) {
    cond = false;
    let aux = 0;
    for (let j = 0; j < (arrLen - 1); j++) {
      if (newArr[j] > newArr[j + 1]) {
        aux = newArr[j];
        newArr[j] = newArr[j + 1];
        newArr[j + 1] = aux;
        cond = true;
      }
      count++;
    }
  }

  /* Indexing */
  if (num < newArr[arrLen - 1]) {
    for (let i = 0; i < newArr.length; i++) {
      if (num <= newArr[i]) {
        return i;
      }
    }
  } else if (num >= newArr[arrLen - 1]) {
    return arrLen;
  }

  return 0; // Default case if arr is empty
}
console.log(getIndexToIns([], 1));