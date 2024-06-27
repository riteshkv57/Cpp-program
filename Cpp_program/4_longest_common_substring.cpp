#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
    int LCS_top_down(string x,string y,int m,int n,vector<vector<int>> &t){
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
                t[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i-1]==y[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else
            t[i][j]=0;
        }
    }    
    return t[m][n];
}

 
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        vector<vector<int>> t(m+1, vector<int>(n+1, -1));
        // memset(t,-1,sizeof(t));
        return LCS_top_down(text1,text2,m,n,t);
        // return t[m-1][n-1];
    }
};
