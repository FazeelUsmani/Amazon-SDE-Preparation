function mergeSort(n) {
  // 20,21,27,14,43,33,1,47,31,26,33,22,18
  // pivot from center
  if (merge.length <= 1) {
    return n;
  }
  merge(n, 0, n.length - 1);
  return n;
}

function merge(n, l, r) {
  if (l >= r) {
    return;
  }
  const pivot = Math.floor((l + r) / 2); //13/2 ~6

  // left include pivot
  merge(n, l, pivot);

  // right exclude pivot
  merge(n, pivot + 1, r);

  //   console.log(`l: ${l}, pivot: ${pivot}, r: ${r}`);
  // Note: Alternative of slice sublist, I can send helper array(the same size of n) and assign helper=n inside mergeLeftRight function
  // e.g. mergeLeftRight(n, helper, l,pivot,r);
  mergeLeftRight(n, n.slice(l, pivot + 1), n.slice(pivot + 1, r + 1), l);
  //   console.log(n);
}

function mergeLeftRight(n, ll, rr, l) {
  //   console.log(`ll: (${ll}), rr: (${rr}), l: ${l}`);
  let iterate = l;
  let left = 0;
  let right = 0;
  while (left < ll.length && right < rr.length) {
    if (ll[left] <= rr[right]) {
      n[iterate++] = ll[left++];
    } else {
      n[iterate++] = rr[right++];
    }
  }

  // rest left
  if (left < ll.length) {
    while (left < ll.length) {
      n[iterate++] = ll[left++];
    }
  }

  // rest right
  //   if (right < rr.length) {
  //     while (right < rr.length) {
  //       n[iterate++] = rr[right++];
  //     }
  //   }
}

let n = [20, 21, 27, 14, 43, 33, 1, 47, 31, 26, 33, 22, 18]; // L=13
let expected = [1, 14, 18, 20, 21, 22, 26, 27, 31, 33, 33, 43, 47]; // L=13
// n*log(n)
mergeSort(n);
console.log(n);

n = [1, 1];
expected = [1, 1];
mergeSort(n);
console.log(n);

n = [3, 1, 1];
expected = [1, 1, 3];
mergeSort(n);
console.log(n);

n = [];
expected = [];
mergeSort(n);
console.log(n);

n = [1];
expected = [1];
mergeSort(n);
console.log(n);

// Space complexity
// The merge sort uses an additional array that’s way its space complexity is O(n), however, the insertion sort uses O(1) because it does the sorting in-place.
