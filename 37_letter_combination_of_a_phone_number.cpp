#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<pow(2,n);i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                if(i&(1<<j))
                temp.push_back(nums[j]);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
int main()
{
    vector<vector<int> > ans;
    vector<int> temp;
    map<char,int> m;
    for(int i=0;i<9;)
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        temp.push_back(k);
    }
    ans=subsets(temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}