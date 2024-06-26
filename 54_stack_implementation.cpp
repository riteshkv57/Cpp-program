#include<iostream>
#include<stack>
using namespace std;

class Stack {
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size =size;
        arr = new int(size);
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] =element;
        }
        else{
            cout<< "stack overflow" << endl;
        }
    }

    void pop(){
        if(top >=0 ){
            top--;
        }
        else{
            cout<< "stack underflow"<< endl;
        }
    }
    
    int peek(){
        if(top>=0  && top <size)
        return arr[top];
        else{
            cout<< "stack is empty"<<endl;
        }
    }

    bool isempty(){
        if(top==-1)
        return true;
        return false;
    }
};


int main(){
    // stack<int> s;
    // s.push(3);
    // s.push(5);
    // // s.pop();
    // cout<<s.top()<<endl;
    // cout<<s.size();
    // return 0;

    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.pop();
    cout<< st.peek() << endl;

}