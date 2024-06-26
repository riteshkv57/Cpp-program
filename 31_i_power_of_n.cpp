#include<iostream>
using namespace std;

int power(int n,int k){
    // base case
    if(k==0)
    return 1;

    int badi=n*power(n,k-1);

    return badi;
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<power(n,k)<<endl;
}