/*
Depth First Traversal (or Search) for a graph is similar to Depth First Traversal of a tree.
 The only catch here is, unlike trees, graphs may contain cycles (a node may be visited twice). 
 To avoid processing a node more than once, use a boolean visited array. 


 Explanation: https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/
Visualization: https://visualgo.net/en/dfsbfs

Complexity Analysis: 
Time complexity: O(V + E), where V is the number of vertices and E is the number of edges in the graph.
Space Complexity: O(V), since an extra visited array of size V is required.
*/

const Graph = require("./Graph.js");

function dfs(graph, source) {
  let stack = [];
  let visited = {};

  // push source into stack and set as visited
  stack.push(source);
  visited[source] = true;

  doDFS(graph, source, visited, stack);

  return stack;
}

function doDFS(graph, v, visited, stack) {
  // get adjacent and iterate do depth first search
  const adjList = graph.AdjList.get(v);
  for (let i = 0; i < adjList.length; i++) {
    console.log(`v: ${v} adj: ${adjList}`);
    if (!visited[adjList[i]]) {
      console.log(`a: ${adjList[i]} adj: ${adjList}`);
      visited[adjList[i]] = true;
      stack.push(adjList[i]);
      doDFS(graph, adjList[i], visited, stack);
    }
  }
}

var g = new Graph();
var vertices = [0, 1, 2, 3];

// adding vertices
for (var i = 0; i < vertices.length; i++) {
  g.addVertex(vertices[i]);
}

// adding edges
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 2);
g.addEdge(2, 0);
g.addEdge(2, 3);
g.addEdge(3, 3);

g.printGraph();
// 0 -> 1 2 2
// 1 -> 0 2
// 2 -> 0 1 0 3
// 3 -> 2 3 3
console.log("DFS");
console.log(dfs(g, 2));
console.log("Expected: 2 0 1 3");
