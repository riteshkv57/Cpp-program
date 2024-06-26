#include<iostream>
#include<stack>
#include<vector>
using namespace std;

bool knows(vector<vector<int> > &arr,int a,int b){
    if(arr[a][b]==1)
    return true;
    return false;
}

int main(){
    vector<vector<int> > arr;
    for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        int p;
        cin>>p;
        arr[row].push_back(p);
            // cin>>arr[row][col];
        }
    }
    stack<int> st;
    for(int i=0;i<3;i++){
        st.push(i);
    }
    while(st.size() > 1){
        int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();
        if(knows(arr,a,b))
        st.push(b);
        else
        st.push(a);
    }
    int k=st.top();
    int zerorows=0;
    bool rowcheck=false;
    bool colcheck=false;
    int onecol=0;
    for(int i=0;i<3;i++){
        if(arr[k][i]==0)
        zerorows++;
    }
    for(int i=0;i<3;i++){
        if(arr[i][k]==0)
        onecol++;
    }
    if(zerorows==3 && onecol==2)
    cout<<k;
    else
    cout<<-1;
    return 0;
}