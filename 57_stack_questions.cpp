#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void sortedinsert(stack<int>& str,int num){
     if(str.empty() || (str.top()<=num)){
        str.push(num);
        return;
    }

    int num1=str.top();
    str.pop();
    sortedinsert(str,num);

    str.push(num1);
}

void sortthestack(stack<int>& str,int n){
     if(str.empty()){
        return;
    }

    int num=str.top();
    str.pop();
    sortthestack(str,n);

    sortedinsert(str,num);
}

vector<int> nextGreaterElement(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        
        for(int i=n-1;i>=0;i--){
            if(st.top()>nums[i]){
                int current=nums[i];
                ans[i]=st.top();
                st.push(current);
            }
            else{
                while(st.top()<nums[i] && st.top()!=-1){
                    st.pop();
                }
                    ans[i]=st.top();
                    st.push(nums[i]);
            }
        }
}

int main(){
       string st="{[({[(((((((((((((({{00)0}}))))))))))))))]})]}";
       stack<int> str;
    str.push(56);
    str.push(46);
    str.push(16);
    str.push(84);
    str.push(78);
    int n=str.size();
    sortthestack(str,n);
    // reversestackusingrecursion(str,n);
     while(!str.empty()){
        cout<<str.top()<<" ";
        str.pop();
    }
    return 0;

}