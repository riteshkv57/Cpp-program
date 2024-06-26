   #include<bits/stdc++.h>
   using namespace std;
   int main()
   {

   }
    int solve(vector<vector<int>>& matrix,vector<vector<int> > &temp,int m,int n,int xindex,int yindex){
        // base case
        if(yindex>=n || yindex<0)
        return INT_MAX/2;
       
        if(xindex==0)
        return matrix[0][yindex];
        

        // memoizing
        if(temp[xindex][yindex]!=-1){
            return temp[xindex][yindex];
        }

        int up=matrix[xindex][yindex] + solve(matrix,temp,m,n,xindex-1,yindex);
        int right=matrix[xindex][yindex] + solve(matrix,temp,m,n,xindex-1,yindex+1);
        int left=matrix[xindex][yindex] + solve(matrix,temp,m,n,xindex-1,yindex-1);
        return temp[xindex][yindex]=min(up,min(right,left));
        // return temp[xindex][yindex]=bottom+right;
    }