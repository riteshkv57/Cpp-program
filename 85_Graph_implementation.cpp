#include<bits/stdc++.h>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T >

class graph {

public:
    unordered_map<T,list<T> > adj;
    
    void addedge(T u,T v,bool direction){
        // direction = 0 -> undirected
        // direction = 1 -> directed graph

        // create an edge from u to v
        adj[u].push_back(v);

        if(direction==0)
        adj[v].push_back(u);
    }

    void printadjlist(){
        for(auto i:adj) {
            cout<<i.first<< "->";
            for(auto j:i.second){
                cout<<j<< ",";
            }                
            cout<<endl;
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the number of nodes"<< endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;


    graph<int> g;

    vector<vector<int>> graph(n, vector<int>(n, 0));
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
        // creating an undirectied graph
        // g.addedge(u,v,0);
    }
    cout<<graph[1][1];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    // printing graph nodes
    // g.printadjlist();
}