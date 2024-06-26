#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size();
    return 0;
}