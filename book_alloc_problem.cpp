#include<iostream>
#include<algorithm>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
int studentcount=1;
int ans=0;
 for(int i=0;i<n;i++){
     if((ans+arr[i])<=mid){
         ans=ans+arr[i];
     }
     else{
         studentcount++;
         if(studentcount>m)
         return false;
     }
 }
return true;
}

int main(){
    int arr[]={215,10,19,10,5,18,7};
    int m=5;
    sort(arr,arr+7);
    // int n=arr.size();
 int s=0;
 int sum=0;
 for(int i=0;i<7;i++){
     sum=sum+arr[i];
 }    
 int e=sum;
 int ans=-1;
int mid=(s+e)/2;
 while(s<=e){
     if(ispossible(arr,7,5,mid)){
         e=mid-1;
         ans=mid;
     }
     else{
         s=mid+1;
     }
     mid=(s+e)/2;
 }
cout<<ans<<endl;
}