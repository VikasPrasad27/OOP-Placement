#include <iostream>
#include <vector>
using namespace std;

void printgraph(const vector<vector<int>>& adjacencymatrix) {
    for(int i = 1; i < 5; i++) {
        cout << "Node: " << i << " Neighbours: ";
        for(int j = 1; j < 5; j++) {
            if(adjacencymatrix[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> edge = {
        {1, 2}, {2, 3}, {3, 4}, {4, 2}, {1, 3}
    };

    vector<vector<int>> adjacencymatrix(5, vector<int>(5, 0));

    for(int i = 0; i < edge.size(); i++) {
        int a = edge[i][0];
        int b = edge[i][1];
        adjacencymatrix[a][b] = 1;
        adjacencymatrix[b][a] = 1; 
    }

    printgraph(adjacencymatrix);
}
