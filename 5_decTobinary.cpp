#include<iostream>
#include<math.h>
using namespace std;
// decimal to binary for bigger numbers--
string dectobinary(int a){
    string binaryRepresentation = "";

    while (a > 0) {
        binaryRepresentation = (char)((a % 2) + '0') + binaryRepresentation;
        a = a / 2;
    }
    return binaryRepresentation;
}


    int main(){
        int a;
        cin>>a;
        int sum=0;
        int i=0;
        while (a!=0){
            int bit =a & 1 ;
            sum= sum + (pow(10,i)*  bit );
            a = a >> 1;
            i++;
    }
        cout << sum << endl ;
    } 

    // check