#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int t[1001][1001];
bool ispalindrome(string s,int i,int j){
    if(i==j)
    return true;
    if(i>j)
    return true;
    while(i<j){
      if(s[i]!=s[j])
      return false;
      i++;
      j--;
    }
    return true;
}
int solve(string s,int i,int j){
    // base case
    if(i>=j)
    return 0;

 //                                                     1.> Find i,j  
   //                                                   2.> Base case  
     //                                                 3.> k loop lines
      //                                                4. take minimum from tempans

    if(ispalindrome(s,i,j)){
        return 0;
    }


    //   memoising
    if(t[i][j]!=-1)                                                                                                 
    return t[i][j];                                                                                                             

    // find k loop
    int mini=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int tempans=solve(s,i,k)+solve(s,k+1,j)+
                    s[i-1]*s[k]*s[j];
        mini=min(mini,tempans);
    }
    return t[i][j]=mini;
}
int main(){
    
}
