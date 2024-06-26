#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void prepareadjlist(unordered_map<int,list<int>> &adjlist,vector<pair<int,int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}

void dfs(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adjlist,vector<int> &component){
    component.push_back(node);
    visited[node] = true;

    // hr connected node ke liye recursive call
    for(auto i:adjlist[node]){
        if(!visited[i]){
            dfs(i,visited,adjlist,component);
        }
    }
}

int main(){
    int vertex; 
    unordered_map<int,list<int>> adjlist;
    vector<vector<int>> ans;
    unordered_map<int,bool> visited;
    vector<pair<int,int>> edges;

    prepareadjlist(adjlist,edges);
    // traverse all components of a graph
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i,visited,adjlist,component);
            ans.push_back(component);
        }
    }
}