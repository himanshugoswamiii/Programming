/*  Time Complexity : 
    Space Complexity :  */
#include <iostream>

using namespace std;

void DFS(int Graph[][7], int visited[], int node){
    cout << node << endl;
    visited[node] = 1;
    for (int i = 0; i < 7; i++) {
        if (visited[i] != 1 && Graph[node][i]==1)
        {
            DFS(Graph, visited, i);
        }
    }

}


int main ()
{
    int Graph [7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };

    int visited[7] = {0};

    DFS(Graph, visited, 0);
    
    return 0;
}
