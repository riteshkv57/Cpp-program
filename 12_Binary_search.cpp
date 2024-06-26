#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    
    while(start<=end){
        if(arr[mid]==key){
        return mid;
        }

        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int even[5]={9,4,9,8,4};
    int odd[6]={1,3,5,7,9,11};
    // int n;
    // cin>>n;

    cout<<" is at index "<<binarysearch(even,5,8)<<" in even array ";
    cout<<endl;
    cout<<" is at index "<<binarysearch(odd,6,5)<<" in odd array ";
    cout<<endl;
    return 0; 
}