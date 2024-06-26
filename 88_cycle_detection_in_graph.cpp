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

bool iscyclicbfs(int src,unordered_map<int,bool> visited,unordered_map<int,list<int>> &adjlist){
    unordered_map<int,int> parent;

    parent[src] = -1;
    queue<int> q;
    q.push(src);
    visited[src]=1;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();

        // traversing all neighbours of frontnode
        for(auto i: adjlist[frontnode]){
            if(visited[i]==true && i!=parent[frontnode]){
                return true;
            }
            else if(!visited[i]){
                q.push(i);
                visited[i] = 1;
                parent[i] =frontnode;
            }
        }
    }
    return false;
}

int main(){
    int vertex;
    unordered_map<int,list<int>> adjlist;
    unordered_map<int,bool> visited;
    vector<pair<int,int>> edges;

    prepareadjlist(adjlist,edges);

    // to handle disconnected components
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bool ans=iscyclicbfs(i,visited,adjlist);
            if(ans==1)
                cout<< "Yes";
        }
    }
    cout<<"No";
    // traverse all components of a graph
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            iscyclicbfs(i,visited,adjlist);
        }
    }
}
