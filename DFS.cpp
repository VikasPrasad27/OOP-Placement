//DFS USES RECURSION
//TC->O(V+E) V=Vertex,E=Edges

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void dfs(int source,unordered_map<int,vector<int>>graph,int n,vector<int>&visited){
    visited[source]=1;
    cout<<source<<" ";
    
        for(int nbr:graph[source]){
            if(!visited[nbr]){
                dfs(nbr,graph,n,visited);
            }
        }
}
int main(){
    vector<vector<int>>edge={
        {0,1},{1,4},{1,2},{2,3}
    };
    int n=5;
    unordered_map<int,vector<int>>graph;
    for(int i=0;i<edge.size();i++){
        int a=edge[i][0];
        int b=edge[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cout<<"DFS"<<endl;
    vector<int>visited(n);
    dfs(0,graph,n,visited);
}