#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


// time complexity
// O(nodes+edges)

// space complexity
// linear
void prepareadjlist(unordered_map<int,list<int>> &adjlist,vector<pair<int,int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adjlist[u].push_back(v);
    }
}

bool iscyclicdfs(int src,unordered_map<int,bool> visited,unordered_map<int,bool> dfsvisited,unordered_map<int,list<int>> &adjlist){
    unordered_map<int,int> parent;

    visited[src]=true;
    dfsvisited[src]=true;

        // traversing all neighbours of frontnode
        for(auto i: adjlist[src]){
            if(!visited[i]){
                bool cycledetected=iscyclicdfs(i,visited,dfsvisited,adjlist);
                if(cycledetected)
                return true;
            }
            else if(dfsvisited[i]){
                return true;
            }
        }
        dfsvisited[src]=false;
    return false;
}

int main(){
    int vertex;
    unordered_map<int,list<int>> adjlist;
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsvisited;
    vector<pair<int,int>> edges;

    prepareadjlist(adjlist,edges);

    // to handle disconnected components
    // for(int i=0;i<vertex;i++){
    //     if(!visited[i]){
    //         bool ans=iscyclicbfs(i,visited,adjlist);
    //         if(ans==1)
    //             cout<< "Yes";
    //     }
    // }
    // cout<<"No";

    // dfs traversal all components of a graph
    for(int i=1;i<=vertex;i++){
        if(!visited[i]){
            bool cyclefound = iscyclicdfs(i,visited,dfsvisited,adjlist);
            if(cyclefound)
            return true;
        }
    }
    return false;
}
