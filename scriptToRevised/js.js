/**
 * Returns a random integer between min (inclusive) and max (inclusive).
 * The value is no lower than min (or the next integer greater than min
 * if min isn't an integer) and no greater than max (or the next integer
 * lower than max if max isn't an integer).
 * Using Math.round() will give you a non-uniform distribution!
 */
function getRandomInt(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

function printRandomInt(min, max) {
  for (let i = 0; i < 10; i++) {
    console.log(getRandomInt(min, max));
  }
}

function forEachShortHand() {
  const array1 = ["a", "b", "c"];
  array1.forEach((element) => console.log(element));

  // with key (Note: index is the 2nd parameter!!)
  array1.forEach((val, index) => {
    console.log(`index:val - ${index}: ${val}`); // Prints the index at which the loop is currently at
  });
}

function forOf() {
  const array1 = ["a", "b", "c"];

  for (const element of array1) {
    console.log(element);
  }
  // expected output: "a"
  // expected output: "b"
  // expected output: "c"
}

function forWithIndex() {
  const array1 = ["a", "b", "c"];

  for (const [i, v] of array1.entries()) {
    console.log(i, v);
  }
  // expected output:
  // 0 a
  // 1 b
  // 2 c

  // or only index:
  //   for (const index of [1, 2, 3, 4, 5].keys()) {
  //     console.log(index);
  //   }
}

function arrayWithSize() {
  /* creates an empty array of length 4
  and will fill the array with undefined */
  let myArr = new Array(4);
  console.log(myArr);

  // creates an array containing the value '4'.
  let myArr2 = new Array("4");
  console.log(myArr2);

  /*  with initial value
    `n` is the size you want to initialize your array
    `0` is what the array will be filled with (can be any other value) */
  let myArr3 = Array(5).fill(0);
  console.log(myArr3);

  /*  Note: In JS you don't need to initialize the length of the array.
  It grows dynamically. You can just store the length in some variable, e.g.
      var data = [];
  var length = 5; // user defined length

  for(var i = 0; i < length; i++) {
      data.push(createSomeObject());
  } */

  /*
  Theoretically there is no need for this. It can even result in confusing behavior,
  because all tests that use the length to find out whether an array is empty or not will report
  that the array is not empty.
  Some tests show that setting the initial length of large arrays can be more efficient
  if the array is filled afterwards, but the performance gain
  (if any) seem to differ from browser to browser. */
}

function keyValMap() {
  const input = { a: 1, b: 2 };

  // map
  let res = Object.entries(input).map(([index, val]) => {
    console.log(`${index}_${val}`);
    return val * 2;
  });
  console.log(res);

  // foreach
  console.log("Foreach");
  Object.entries(input).forEach(([index, val]) => {
    console.log(`${index}_${val}`);
  });
}

function main() {
  // ====== random int ======
  //   printRandomInt(1, 10);

  // ====== for of ======
  //   forOf();

  // ====== for key, value ======
  //   forWithIndex();

  // ====== .forEach() ======
  //   forEachShortHand();

  // dict or key-val array map
  keyValMap();

  // ====== Array[size] ======
  //   arrayWithSize();
}

main();
