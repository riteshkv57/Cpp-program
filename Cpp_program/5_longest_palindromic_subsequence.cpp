#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:

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
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }    
    return t[m][n];
}

    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s.begin(),s.end());
        string s2=s;
        int m=s1.length();
        int n=s2.length();
        vector<vector<int>> t(m+1, vector<int>(n+1, 0));
        return LCS_top_down(s1,s2,m,n,t);
    }
};