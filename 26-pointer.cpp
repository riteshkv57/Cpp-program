#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=&arr[0];
    cout<<"->"<<p<<endl;
    p=p+2;
    cout<<*p<<endl;
    // p=p+1;
    cout<<&p<<endl;
    // p=p+1;
    cout<<"->"<<arr<<endl;
    cout<<*arr<<endl;
    // p=p+1;
    cout<<"->"<<&arr<<endl;
}

// 0x28ff14
// 0x28ff04