#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0)
    return 1;

    int badi=n*factorial(n-1);

    return badi;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}