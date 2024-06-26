#include<iostream>
using namespace std;

int print(int n){
    // base case
    if(n==1){
    return n+1;
    }

    print(n-1);

    cout<<n<<endl;
    // return badi;
}

int main(){
    int n;
    cin>>n;
    cout<<print(n)<<endl;
}