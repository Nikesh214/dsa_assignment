## Documentation of Dijkstra’s Algorithm in C
### Data Structures Defined

Graph Representation (Adjacency Matrix)

#### int graph[V][V];


Stores the weights of edges between vertices.

graph[i][j] is the weight of the edge from vertex i to vertex j.

0 indicates no edge between the vertices.

V is the total number of vertices.

#### Distance Array

#### int dist[V];


Keeps the shortest distance from the source node to each vertex.

Initialized to INT_MAX (representing infinity) for all vertices except the source vertex, which is set to 0.

#### Shortest Path Tree Set (SPT)

#### int sptSet[V];


Tracks vertices whose shortest distance from the source is finalized.

1 indicates the vertex is included in the SPT.

0 indicates the vertex is not yet included.

## Function Implementation

#### int minDistance(int dist[], int sptSet[])

Purpose: Finds the vertex with the minimum distance from the source that is not yet included in the SPT.

Implementation Steps:

Initialize min to INT_MAX and min_index.

Loop through all vertices.

If a vertex is not in sptSet and its distance is less than min, update min and min_index.

Return min_index.

#### void dijkstra(int graph[V][V], int src)

Purpose: Computes the shortest path from the source vertex to all other vertices using Dijkstra's algorithm.

Implementation Steps:

Initialize dist[] to INT_MAX and sptSet[] to 0.

Set dist[src] = 0.

Repeat V-1 times:

Select the vertex u with the minimum distance using minDistance().

Mark u as included in sptSet.

Update distances of adjacent vertices v of u:

#### if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
dist[v] = dist[u] + graph[u][v];


Print the shortest distances from the source to all vertices.

## Overview of main() Method

Define a weighted directed graph using an adjacency matrix.

Call dijkstra(graph, 0) to compute the shortest distances from the source vertex 0.

Print the distances.

int main() {
    int graph[V][V] = {

        {0, 10, 0, 0, 5},

        {0, 0, 1, 0, 2},

        {0, 0, 0, 4, 0},

        {7, 0, 6, 0, 0},

        {0, 3, 9, 2, 0}

    };

    dijkstra(graph, 0);

    return 0;

}


The main() function is simple and mainly organizes the graph data and invokes the Dijkstra algorithm.

##  Sample Output of the Program

0 0

1 8

2 9

3 7

4 5


Explanation of Output:

0 0 → Distance from source (0) to vertex 0 is 0.

1 8 → Shortest distance from source (0) to vertex 1 is 8.

2 9 → Shortest distance from source (0) to vertex 2 is 9.

3 7 → Shortest distance from source (0) to vertex 3 is 7.

4 5 → Shortest distance from source (0) to vertex 4 is 5.

## Conclusion

The program successfully implements Dijkstra’s Algorithm using an adjacency matrix and arrays for distance and shortest path tracking. It efficiently finds the shortest path from a given source vertex to all other vertices in a weighted directed graph. This approach is suitable for graphs with a moderate number of vertices and demonstrates fundamental concepts of graph traversal, greedy algorithms, and dynamic updating of shortest paths.

The output clearly shows the minimum distances, validating the correctness of the algorithm.