/*
Given a Binary tree, Traverse it using DFS using recursion.
unlike linear data structures (Array, Linked List, Queues, Stacks, etc) 
which have only one logical way to traverse them, 
trees can be traversed in different ways. 

Generally, there are 2 widely used ways for traversing trees:
With example tree:
    1
   / \
  2   3
 / \
4   5
1. DFS or Depth First Search
Depth First Traversals: 
(a) Inorder (Left, Root, Right) : 4 2 5 1 3 
(b) Preorder (Root, Left, Right) : 1 2 4 5 3 
(c) Postorder (Left, Right, Root) : 4 5 2 3 1
2. BFS or Breadth First Search
Breadth-First or Level Order Traversal: 1 2 3 4 5 

Code & Explanation: 
DFS: https://www.geeksforgeeks.org/dfs-traversal-of-a-tree-using-recursion/
BFS: https://www.geeksforgeeks.org/level-order-tree-traversal/
*/

const Node = require("./Node.js");
// =============== DFS ===============
function dfsInorder() {}
function dfsPreorder() {}
function dfsPostorder() {}
// =============== BFS ===============
function bfs() {}

root = new Node(1);
root.left = new Node(2);
root.right = new Node(3);
root.left.left = new Node(4);
root.left.right = new Node(5);
