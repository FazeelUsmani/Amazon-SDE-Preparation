/* Breadth-First Traversal (or Search) for a graph is similar to Breadth-First Traversal of a tree . 
The only catch here is, that, unlike trees, graphs may contain cycles, 
so we may come to the same node again.  

To avoid processing a node more than once, we use a boolean visited array. 
For simplicity, it is assumed that all vertices are reachable from the starting vertex. 
*BFS uses a queue data structure* for traversal.

code & limitation: https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/ 
BFS vs DFS: https://www.geeksforgeeks.org/difference-between-bfs-and-dfs/
Visualization: https://visualgo.net/en/dfsbfs

Time Complexity: O(V+E), where V is the number of nodes and E is the number of edges.
Auxiliary Space: O(V)

Time Complexity explanation - Why is the complexity of BFS O(V+E) instead of O(V*E)?:
E is not the number of edges adjacent to each vertex - 
its actually the total number of edges in the graph. 
Defining it this way is useful because you don't necessarily have the same number of edges 
on every single vertex.
Since each edge gets visited once by the time the DFS ends, 
you get O(E) complexity from that part. 
Then you add the O(V) for visiting each vertex once and get O(V + E) on total.
*/
const Graph = require("./Graph.js");

function bfs(graph, source) {
  let visitedMem = [];
  let q = [];
  let result = [];

  let v = source;
  // set visited vertices as true
  visitedMem[v] = true;

  // loop to rest graph
  do {
    // console.log(`v: ${v} q: ${q} adj: ${[...graph.AdjList.get(v)]}`);
    // push the first vertice in queue
    result.push(v);

    const adjacentList = [...graph.AdjList.get(v)];
    // set each adj vertices as true in visited
    adjacentList.forEach((ver) => {
      if (!visitedMem[ver]) {
        visitedMem[ver] = true;
        // push adjacent vertices in queue
        q.push(ver);
      }
    }); // set visited vertices as true
    // console.log(`a: ${adjacentList} `);
  } while ((v = q.shift()));
  return result;
}

var g = new Graph();
var vertices = ["A", "B", "C", "D", "E", "F"];

// adding vertices
for (var i = 0; i < vertices.length; i++) {
  g.addVertex(vertices[i]);
}

// adding edges
g.addEdge("A", "B");
g.addEdge("A", "D");
g.addEdge("A", "E");
g.addEdge("B", "C");
g.addEdge("D", "E");
g.addEdge("E", "F");
g.addEdge("E", "C");
g.addEdge("C", "F");

g.printGraph();

console.log("BFS");
console.log(bfs(g, "A"));
console.log("Expected: A B D E C F");
