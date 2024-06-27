#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        vector<int> ans;
        int first1=-1,last1=-1,minoperation=0;
        for(int i=0;i<a;i++){
            int x;
            cin>>x;
            ans.push_back(x);
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1){
                first1=i;
                break;
            }
        }
        for(int i=a-1;i>=0;i--){
            if(ans[i]==1){
                last1=i;
                break;
            }
        }
        for(int i=first1;i<last1;i++){
            if(ans[i]==0)
            minoperation++;
        }
        cout<<minoperation<<endl;
    }
    return 0;
}
