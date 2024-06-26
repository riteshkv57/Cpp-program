#include<iostream>
#include<stack>
using namespace std;

bool isvalidparenthesis(string &st,int n){
    stack<char> str;
    for(int i=0;i<n;i++){
        if(st[i]=='{' || st[i]=='[' || st[i]=='(')
        str.push(st[i]);
        else{
            if(!str.empty()){
                char top=str.top();
                if(st[i]=='}' && top=='{' || st[i]==']' && top=='['|| st[i]==')' && top=='(')
                str.pop();
                 else
                 return false;
            }
            else
            i++;
        }
    }
     if(str.empty())
     return true;
     return false;
}

bool isredundantbracket(string &st,int n){
    stack<char> str;
    for(int i=0;i<n;i++){
        if(st[i]=='{' || st[i]=='[' || st[i]=='(' || st[i]=='+' || st[i]=='-' || st[i]=='*' || st[i]=='/')
        str.push(st[i]);
        else{
            if(!str.empty()){
                char top=str.top();
                if((top=='+' || top=='-'|| top=='*' || top=='/') && (st[i]=='}' || st[i]==']' || st[i]==')')){
                str.pop();
                str.pop();
                }
                 else
                 return true;
            }
            else                     
            i++;
        }
    }
     if(str.empty())
     return false;
     return true;
}

void insertatend(stack<int>& str,int n,int k){
     if(str.empty()){
        str.push(k);
        return;
    }

    int num=str.top();
    str.pop();
    insertatend(str,n,k);

    str.push(num);
}

void reversestackusingrecursion(stack<int>& str,int n){
    // base case
    if(str.empty())
    return;

    int num=str.top();
    str.pop();
    reversestackusingrecursion(str,n);
    int count=0;
    insertatend(str,n,num);
}

int main(){
       string st="((A*(B+C)))";
       stack<int> str;
    str.push(22);
    str.push(43);
    str.push(46);
    str.push(42);
    str.push(44);
    int n=str.size();
    // int count=0;
    // int k=34;
    // insertatend(str,count,n,k);
    // reversestackusingrecursion(str,n);
    cout<<isredundantbracket(st,n);
    // while(!str.empty()){
    //     cout<<str.top()<<" ";
    //     str.pop();
    // }
    // int n=st.length();
//    int k= isvalidparenthesis(st,n);
//    cout<<k;
    return 0;
}