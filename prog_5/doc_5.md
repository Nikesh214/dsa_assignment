## Program Documentation: Graph Traversal using BFS and DFS
## Purpose of the Program

This program demonstrates how to represent an undirected graph using an adjacency matrix and traverse it using Breadth-First Search (BFS) and Depth-First Search (DFS) algorithms.

### Data Structures Defined

#### Adjacency Matrix

int graph[MAX][MAX];


Represents the connections between nodes.

graph[i][j] = 1 indicates an edge between node i and node j.

MAX defines the number of nodes in the graph.

#### Visited Array

int visited[MAX];


Tracks which nodes have been visited during traversal.

Initialized to 0 (not visited), set to 1 when a node is visited.

#### Queue (for BFS)

int queue[MAX], front, rear;


Implements a simple queue for BFS traversal.

front and rear track the start and end of the queue.

## Function Descriptions

#### BFS(int graph[MAX][MAX], int start)

Purpose: Performs Breadth-First Search traversal starting from start node.

Logic:

Initialize visited array to track visited nodes.

Use a queue to explore nodes level by level.

For each dequeued node, print it and enqueue its unvisited neighbors.

#### DFSUtil(int graph[MAX][MAX], int node, int visited[])

Purpose: Recursive utility function for Depth-First Search.

Logic:

Mark current node as visited.

Print the node.

Recursively visit all unvisited neighbors.

#### DFS(int graph[MAX][MAX], int start)

Purpose: Initiates DFS traversal.

Logic:

Initialize visited array.

Call DFSUtil() on the start node.

## Overview of main() Method

Defines an example undirected graph using a 5x5 adjacency matrix:

int graph[MAX][MAX] =

 {

    {0,1,1,0,0},

    {1,0,1,1,0},
    {1,1,0,0,1},
    {0,1,0,0,1},
    {0,0,1,1,0}
};


Calls BFS(graph, 0) to perform Breadth-First Search starting from node 0.

Calls DFS(graph, 0) to perform Depth-First Search starting from node 0.

## Sample Output
BFS Traversal: 0 1 2 3 4

DFS Traversal: 0 1 2 4 3

## Conclusion

The program demonstrates:

How to represent an undirected graph using an adjacency matrix.

How BFS explores nodes level by level using a queue.

How DFS explores nodes depth-wise using recursion.

This approach can be extended to larger graphs or modified for directed graphs, weighted graphs, and other graph algorithms like shortest path or connectivity checks.