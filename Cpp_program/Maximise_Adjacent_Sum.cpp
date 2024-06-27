#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    vector<int> ans;
	    for(int i=0;i<a;i++){
	        int x;
	        cin>>x;
	        ans.push_back(x);
	    }
        sort(ans.begin(),ans.end());
	    int sum=0;
	    for(int i=0;i<ans.size()-1;i++){
	        sum+=ans[i]+ans[i+1];
	    }
	    cout<<sum<<endl;
	}
return 0;
}
