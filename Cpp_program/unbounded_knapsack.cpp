#include<iostream>
#include<algorithm>
using namespace std;
int dp(int wt[],int val[],int t[10][10]){
    int n,w;
    for(int i=2;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(wt[i-1]<j){
                    t[i][j]=max(val[i]+t[i][j-wt[i-1]],t[i-1][j]);
                }
                else
                    t[i][j]=t[i-1][j];
            }
        }
}
int main(){
    int a[10];
    cout<<"enter value of n:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<"value of n is"<<" "<<a[i]<<endl;
    }
}