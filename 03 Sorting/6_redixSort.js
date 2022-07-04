/* What if the elements are in the range from 1 to n2? 
We can’t use counting sort because counting sort will take O(n2) 
which is worse than comparison-based sorting algorithms. 
Can we sort such an array in linear time?  
Radix Sort is the answer 

Code/limitation: https://www.geeksforgeeks.org/radix-sort/ 
Visualization: https://visualgo.net/en/sorting

Complexity:
Let there be d digits in input integers. Radix Sort takes O(d*(n+b)) time 
where b is the base for representing numbers, for example, for the decimal system, b is 10. 
What is the value of d? If k is the maximum possible value, then d would be O(logb(k)).*/

function redixSort(n) {
  // define max value
  const max = findMax(n);
  console.log(max);

  for (let exp = 1; Math.floor(max / exp) > 0; exp *= 10) {
    // console.log(`exp: ${exp}`);
    doRedix(n, exp);
  }
}

function doRedix(n, exp) {
  console.log("n");
  console.log(n);

  // exp: 1,10,100,1000
  // create 10 queues (0-9)
  let q = new Array(10).fill(0);
  let output = new Array(n.length);
  //   console.log(q);

  // loop each input and loop each digits (start from rightmost) put in each match queue.
  for (let i = 0; i < n.length; i++) {
    /* floor( (i% (10*exp)) /exp)
    e.g. digit 1: 121%10 = 1 -> i% (10*exp)
         digit 4: floor((12001%10000)/1000) = 2
         digit 4: floor((301%10000)/1000) = 0
    */
    console.log(
      `exp: ${exp} ni: ${n[i]}, q: ${Math.floor((n[i] % (10 * exp)) / exp)}`
    );
    q[Math.floor((n[i] % (10 * exp)) / exp)]++;
  }
  //   console.log("q");
  //   console.log(q);

  // plus q[i] with q[i-1]
  for (let i = 1; i < q.length; i++) {
    q[i] += q[i - 1];
  }
  console.log("q2");
  console.log(q);

  // pop  the queue - replace each input with item in the queue staring from 0
  for (let i = n.length - 1; i >= 0; i--) {
    let tmp = q[Math.floor((n[i] % (10 * exp)) / exp)];
    output[tmp - 1] = n[i];
    q[Math.floor((n[i] % (10 * exp)) / exp)]--;
  }
  console.log("output");
  console.log(output);

  // replace input with the redix
  for (let i = 0; i < n.length; i++) {
    n[i] = output[i];
  }
}

function findMax(n) {
  let max = n[0];
  for (let i = 1; i < n.length; i++) if (n[i] > max) max = n[i];
  return max;
}

let n = [170, 45, 75, 90, 802, 24, 2, 66];
// n of 1st digit: [_,_,_,_,_, _,_,66] > [2,2,4,4,5,7,8,8,8,8]
// n of 1st digit: [_,_,_,2,_, _,_,66] > [2,2,3,4,5,7,8,8,8,8]
// ..
// n of 1st digit: [170,90,802,2,24, 45,75,66] > [0,2,2,2,4,5,8,8,8,8]
// expect: 2 24 45 66 75 90 170 802
redixSort(n);
console.log(n);

n = [
  3221, 1, 10, 9680, 577, 9420, 7, 5622, 4793, 2030, 3138, 82, 2599, 743, 4127,
];
redixSort(n);
console.log(n);
