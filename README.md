### Shortest Path Finder

This C++ program calculates the shortest distances from a source vertex to all other vertices in a weighted directed graph using Dijkstra's algorithm. The program takes an adjacency matrix as input, where each element represents the weight of the edge between two vertices. 


#### Input Format
- The program expects the size of the adjacency matrix as the first input.
- The adjacency matrix should be entered row by row, where each row contains space-separated integers representing the weights of the edges from the corresponding vertex to all other vertices. If there is no direct edge between two vertices, enter 0 or a large value to represent infinity.

#### Output Format
- The program outputs the shortest distances from the source vertex to all other vertices in the graph.
- Each line of the output displays the distance from the source vertex to a specific vertex.

#### Example
adjacency matrix:
```
1 2 3 4
0 3 2 1
2 3 4 5
1 2 0 0
```
Running the program with this input would produce the following output:
```
Shortest distances:
Distance 1: 0
Distance 2: 2
Distance 3: 3
Distance 4: 3
```
This indicates that the shortest distance from vertex 1 to vertex 2 is 2, to vertex 3 is 3, and to vertex 4 is 1.

#### Note
- If there is no path from the source vertex to a specific vertex, the program will output a large value indicating infinity for that distance.
