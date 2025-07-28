#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printgraph(unordered_map<int,vector<int>>graph) {
    for(auto a:graph){
        cout<<"Node:"<<a.first<<", Neighbour:";
        for(int node:a.second){
            cout<<node<<" ";
        }
        cout<<endl;
    }
}

int main() {
    vector<vector<int>> edge = {
        {1, 2}, {2, 3}, {3, 4}, {4, 2}, {1, 3}
    };

    unordered_map<int,vector<int>>graph;
    for(int i = 0; i < edge.size(); i++) {
       int a=edge[i][0];
       int b=edge[i][1];
       graph[a].push_back(b);
       graph[b].push_back(a);
    }

    printgraph(graph);
}
