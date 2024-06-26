#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &str,int count,int n){
    if(count==n/2){
        str.pop();
        return;
    }

    int num=str.top();
    str.pop();
    solve(str,count+1,n);

    str.push(num);
}

void deletemiddle(stack<int> &str,int n){
    int count=0;
    solve(str,count,n);
}

int main(){
    //*** reverse string using stack*****
    // string str="babbar";
    // stack<char> s;
    

    // for(int i=0;i<str.length();i++){
    //     s.push(str[i]);
    // }
    // string ans="";
    // while(!s.empty()){
    //     ans+=s.top();
    //     s.pop();
    // }
    // cout<< ans;

    // ****delete middle element in stack******
    
    stack<int> str;
   
    str.push(22);
    str.push(43);
    str.push(46);
    str.push(42);
    str.push(44);
    int n=str.size();
    deletemiddle(str,n);
    while(!str.empty()){
        cout<<str.top()<<" ";
        str.pop();
    }
    return 0;
}