#include<bits/stdc++.h>
using namespace std;

 int solve(int *arr,int n){
        // base case
       if(n<0){
            return 0;
        }
        if(n==0)
        return arr[0];
        
        // include
        int k=solve(arr,n-2)+arr[n-2];
        
        // exclude
        int k1=solve(arr,n-1)+0;
        return max(k,k1);
    }

    int solvemem(int *arr,int n,vector<int> &dp){
        // base case
        if(n<0){
            return 0;
        }
        if(n==0)
        return arr[0];
        
        if(dp[n]!=-1)
        return dp[n];
        
        // include
        int k=solve(arr,n-2)+arr[n-2];
        
        // exclude
        int k1=solve(arr,n-1)+0;
        return dp[n]=max(k,k1);
    }

    int solvetab(int *arr,int n){
       vector<int> dp(n,0);
       dp[0]=arr[0];
       for(int i=0;i<n;i++){ 
        int incl=dp[i-2]+arr[i];
        int excl=dp[i-1]+0;
        dp[i]=max(incl,excl);
       }
        return dp[n-1];
    }

    int solvetabspaceoptimised(int *arr,int n){
    int prev2=0;
    int prev=arr[0];
    for(int i=1;i<n;i++){
        int incl=prev2+arr[i];
        int excl=prev+0;
        int ans=max(incl,excl);
        prev2=prev;
        prev=ans;
    }
    return prev;
    }



int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> ans;
	vector<int> dp(n+1,-1);
	return solvemem(arr,n-1,dp);
}