#include<iostream>
using namespace std;

int secondoccu(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    int temp=-1;
    while(start<=end){
        if(arr[mid]==key){
        temp=mid;
        start=mid+1;
        }

        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return temp;
}

int firstoccu(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    int temp=-1;
    while(start<=end){
        if(arr[mid]==key){
        temp=mid;
        end=mid-1;
        }

        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return temp;
}

int main(){
    int even[5]={9,5,3,8,4};
    int odd[6]={1,3,5,7,9,11};
    // int n;
    // cin>>n;
    
    // pair<int,int> p;
    // p.first=firstoccu(even,8,n);
    // p.second=secondoccu(even,8,n);

    // return p;


    // cout<<n<<" is at index "<<firstoccu(even,8,n)<<" in this array ";
    // cout<<endl;
    // cout<<n<<" is at index "<<secondoccu(even,8,n)<<" in this array ";
    // cout<<endl;

// total number of occurance->
    // int k =secondoccu(even,8,n) -firstoccu(even,8,n) +1;
    cout<< firstoccu(even,5,3);
    // cout<<" number of occurance of "<< n <<" is "<< k <<" in this array ";
    cout<<endl;

    return 0; 
}

// check