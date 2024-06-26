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

void bfs(unordered_map<int,list<int>> &adjlist,unordered_map<int,bool> visited,vector<int> ans,int node){
    queue<int> q;
    q.push(node);
    visited[node]=1;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();

        // store frontnode into ans
        ans.push_back(frontnode);

        // traversing all neighbours of frontnode
        for(auto i: adjlist[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

int main(){
    int vertex;
    unordered_map<int,list<int>> adjlist;
    vector<int> ans;
    unordered_map<int,bool> visited;
    vector<pair<int,int>> edges;

    prepareadjlist(adjlist,edges);
    // traverse all components of a graph
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adjlist,visited,ans,i);
        }
    }
}
