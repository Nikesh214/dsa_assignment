#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void BFS(int graph[MAX][MAX], int start){
    int visited[MAX] = {0};
    int queue[MAX], front=0, rear=0;
    queue[rear++] = start;
    visited[start] = 1;
    printf("BFS Traversal: ");
    while(front < rear){
        int node = queue[front++];
        printf("%d ", node);
        for(int i=0;i<MAX;i++){
            if(graph[node][i] && !visited[i]){
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

void DFSUtil(int graph[MAX][MAX], int node, int visited[]){
    visited[node] = 1;
    printf("%d ", node);
    for(int i=0;i<MAX;i++){
        if(graph[node][i] && !visited[i]){
            DFSUtil(graph, i, visited);
        }
    }
}

void DFS(int graph[MAX][MAX], int start){
    int visited[MAX] = {0};
    printf("DFS Traversal: ");
    DFSUtil(graph, start, visited);
    printf("\n");
}

int main(){
    int graph[MAX][MAX] = {
        {0,1,1,0,0},
        {1,0,1,1,0},
        {1,1,0,0,1},
        {0,1,0,0,1},
        {0,0,1,1,0}
    };
    
    BFS(graph, 0);
    DFS(graph, 0);
    
    return 0;
}