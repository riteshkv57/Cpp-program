#include<iostream>
#include<vector>
using namespace std;

vector<int> selection_sort(vector<int> arr,int n){
    n=arr.size();
    for(int i=0;i<n-1;i++){
        int  minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
            minindex=j;
        }
        swap(arr[i],arr[minindex]);
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
    vector<int> ans=selection_sort(arr,n);
     
     for(int i=0;i<n;i++){
         cout<<ans[i]<<" ";
     }
     cout<<endl;
     return 0;
}