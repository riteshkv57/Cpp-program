#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
  int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // bottom up
        vector<vector<long long>> t(n+1,vector<long long>(2,0));
        for(int i=n-1;i>=0;i--){
            int profit=0;
            for(int j=0;j<=1;j++){
                 if(j){
                    profit = max(-prices[i]+t[i+1][0] ,0+t[i+1][1]);
                }
                else
                    profit =  max(prices[i]+t[i+1][1] ,0+t[i+1][0]);
            t[i][j]=profit;
            }
        }
        return t[0][1];
    }
int main(){
    vector<int> prices;
    return maxProfit(prices);
}
