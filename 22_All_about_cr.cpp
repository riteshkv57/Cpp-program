#include <iostream>
#include <algorithm>
using namespace std;


// if to remove leading zeroes then 
result.erase(0, result.find_first_not_of('0'));


char tolowercase(char ch){
    char temp;
    if(ch>='a' && ch <='z')
    return ch;
    else{
        temp=ch-'A'+'a';
    }
    return temp;
}

bool checkpalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(tolowercase(name[s])!=tolowercase(name[e]))
        return 0;
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main() {
   char name[20];
   cout<< "Enter your name"<< endl;
   cin>>name;
   int k=getlength(name);
//   name[2]='\0'
   cout<<"Size of string is "<<k<<endl;
   
   cout<<"Your name is ";
   cout<< name<<endl;
   
   reverse(name,k);
   cout<<"Reverse of string is "<< name<<endl;
   cout<<"palindrome: "<< checkpalindrome(name,k)<<endl;
   
    return 0;
}