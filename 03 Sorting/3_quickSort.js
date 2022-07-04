function quickSort(n) {
  doQS(n, 0, n.length - 1);
}

function doQS(n, pivot, r) {
  // console.log(`p:r - ${pivot}:${r}`);
  if (pivot >= r) return;

  const l = pivot;
  // choose head of sublist as a pivot
  // swap lesser than the pivot with greater number after 20 position, iterate until last index e.g. [20, 21,27,1 ]> [20, 1,27,21]
  let indexToSwap = pivot + 1;
  for (let i = pivot + 1; i <= r; i++) {
    // O(n)
    if (n[i] <= n[pivot]) {
      const tmp = n[indexToSwap];
      n[indexToSwap++] = n[i];
      n[i] = tmp;
    }
  }
  // console.log(`indexToSwap:pivot - ${indexToSwap}:${pivot}`);

  // swap the pivot to be before the greater value position e.g. [20, 1,27,21] > [1,20,27,21]
  const tmp = n[indexToSwap - 1];
  n[indexToSwap - 1] = n[pivot];
  n[pivot] = tmp;
  // console.log(n);
  // loop the sort at left and right side of the pivot
  // left
  doQS(n, l, indexToSwap - 2); //log(n)
  // right
  doQS(n, indexToSwap, r); //log(n)
}

let n = [20, 21, 27, 14, 43, 33, 1, 47, 31, 26, 33, 22, 18]; // L=13
// [20,14, 27,21], [ 43, 33, 1, 47, 31, 26, 33, 22, 18]
// [20,14, 1,18], [ 43, 33, 27, 47, 31, 26, 33, 22, 21]
// [20,14,1,18], [43, 33, 27, 47, 31, 26, 33, 22, 21]
// [18,14,1,20], [43, 33, 27, 47, 31, 26, 33, 22, 21]
let expected = [1, 14, 18, 20, 21, 22, 26, 27, 31, 33, 33, 43, 47]; // L=13
// n*log(n)
quickSort(n);
console.log(n);

n = [1, 1];
expected = [1, 1];
quickSort(n);
console.log(n);

n = [3, 1, 1];
expected = [1, 1, 3];
quickSort(n);
console.log(n);

n = [];
expected = [];
quickSort(n);
console.log(n);

n = [1];
expected = [1];
quickSort(n);
console.log(n);
