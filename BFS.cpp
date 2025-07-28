//1)Insert source node into queue (and check its neighbours) using adjacency lists and push into queue 
//2)Mark it as visited in visited array
//3)pop frontnode and print it (And Repeate)(WHILE QUEUE IS EMPTY)
//4)traverse throught adjlist for neighbours of frontnode and if not visited make it visited and push into queue

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void bfs(int source,unordered_map<int,vector<int>>&graph,int n){
    queue<int>q;
    vector<int>visited(n+1);

    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        cout<<frontnode<<" ";
        for(int nbr:graph[frontnode]){
            if(!visited[nbr]){
                visited[nbr]=1;
                q.push(nbr);
            }
        }
    }
}

int main() {
    vector<vector<int>> edge = {
        {0,1}, {1,4}, {1,2}, {2, 3}
    };

    unordered_map<int,vector<int>>graph;
    for(int i = 0; i < edge.size(); i++) {
       int a=edge[i][0];
       int b=edge[i][1];
       graph[a].push_back(b);
       graph[b].push_back(a);
    }

    bfs(1,graph,5);
}
