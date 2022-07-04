/* Like other algorithms this sorting algorithm is not a comparison-based algorithm, 
it hashes the value in a temporary count array and uses them for sorting.

Time complexity: O(n), where n is total number of elements
Auxiliary Space: O(n)

Read the limitation: https://www.geeksforgeeks.org/counting-sort/
*/

function countingSort(n) {
  // find min, max in the input
  let min = Math.min(...n);
  let max = Math.max(...n);
  //   console.log(`min: ${min}, max: ${max}`);

  // find range to create array of  hash memory in size of this range
  const range = max - min + 1;

  // create a hash value key-array of the range size , and intial value as 0
  let hashMem = new Array(range).fill(0);

  //   then plus 1 if found in input
  for (const item of n) {
    ++hashMem[item - min];
  }

  // loop the key-array and replace val with val+val from the previous  index
  let tmp = 0;
  hashMem = hashMem.map((val) => {
    val += tmp;
    tmp = val;
    return val;
  });

  // return a new response array(1-indexed) by loop input and check each input with the key-array that keeps index of response
  // and, minus one after read value from  key-array
  const res = new Array(n.length);
  for (const item of n) {
    res[hashMem[item - min] - 1] = item;
    --hashMem[item - min];
  }

  // copy the res to n, so the input to be sorted
  for (let i = 0; i < n.length; i++) {
    n[i] = res[i];
  }
}

let n = [2, 3, 8, 7, 1, 2, 2, 2, 7, 3, 9, 8, 2, 1, 4]; // the range of value is between 0 to 10
// expect mem - [0:0, 1:2, 2:5, 3: 2, 4:1, 5:0, 6:0, 7:2, 8:2, 9:1, 10:0]
// expect mem after sum from previous val - [0:0, 1:2, 2:7, 3: 9, 4:10, 5:10, 6:10, 7:12, 8:14, 9:15, 10:15]
// after check input with mem - [_,_,_,_,_,_,2,_,_,_,_,_,_,_,_], -> edit the mem 2:6
// ...
// expected = [ 1, 1, 2, 2, 2, 2,2, 3, 3, 4, 7, 7,8, 8, 9]
countingSort(n); // Limitation that it should know the range of inpu
console.log(n);

n = [-5, -10, 0, -3, 8, 5, -1, 10];
// expected = -10 -5 -3 -1 0 5 8 10
countingSort(n);
console.log(n);
