#include<iostream>
#include<vector>
using namespace std;

vector<int> insertion_sort(vector<int> arr,int n){
    n=arr.size();
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
                }
            else{
                break;
            }
        }
        arr[j+1]=temp;
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
    vector<int> ans=insertion_sort(arr,n);
     
     for(int i=0;i<n;i++){
         cout<<ans[i]<<" ";
     }
     cout<<endl;
     return 0;
}