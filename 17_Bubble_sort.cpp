#include<iostream>
#include<vector>
using namespace std;

vector<int> bubble_sort(vector<int> arr,int n){
    n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    return arr;
}

int main(){
    // int arr[5]={3,1,8,5,2};
    vector<int> arr;
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
    }
    vector<int> ans=bubble_sort(arr,n);
     
     for(int i=0;i<n;i++){
         cout<<ans[i]<<" ";
     }
     cout<<endl;
     return 0;
}