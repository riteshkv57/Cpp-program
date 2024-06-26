#include<iostream>
#include<vector>
using namespace std;

int merge(int *arr,int s,int e){
    int mid;
    mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int arr1[len1];
    int arr2[len2];

    int mainarrayIndex=s;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[mainarrayIndex++];
    }

    for(int i=0;i<len2;i++){
        arr2[i]=arr[mainarrayIndex++];
    }

    // int mainarray[len1+len2];
    mainarrayIndex=s;

    int i=0,j=0;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr[mainarrayIndex++]=arr1[i++];
        }
        else{
            arr[mainarrayIndex++]=arr2[j++];
        }
    }
        while(i<len1){
             arr[mainarrayIndex++]=arr1[i++];
        }
        while(j<len2){
            arr[mainarrayIndex++]=arr2[j++];
        }
       
}


int merge_sort(int *arr,int s,int e){
    if(s>=e){
    return 0;
    }
    
    int mid;
    mid=(s+e)/2;

    merge_sort(arr,s,mid);

    merge_sort(arr,mid+1,e);

    merge(arr,s,e);

}



int main(){
    int arr[5]={16,18,14,4,2};
    int n=5;
    merge_sort(arr,0,4);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<endl;
    cout<<endl;
    return 0;
}