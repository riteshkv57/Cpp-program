#include<iostream>
using namespace std;


// printing 1 to n by backtracking
void print(int k,int n){
    if(k==n+1)
    return ;
    cout<<k<<" ";
    print(k+1,n);
}


int main(){
    int n;
    cin>>n;
    int k=1;
    print(k,n);
    return 0;
}