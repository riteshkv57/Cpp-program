// #include <cstdlib>
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main()
// {
//    int arr[5]={1,2,3,4,5};
// int i=0;        

// for(int i=0;i<100;i++){
//     cout<<rand()%i;
//    cout<<endl;
    // int k=rand();
    // if(k<=100){
    //     cout<<k;
    //     cout<<endl;
    // }
//    cout<<endl;

// }
//    cout<<rand();
//    cout<<endl;
//    cout<<rand();
//    cout<<endl;

    // return 0;
// }

#include<iostream>
using namespace std;
main() {
   string str1 = "aabbabababbbaabb";
   string str2 = "abb";
   int pos = 0;
   int index;
   while((index = str1.find(str2, pos)) != string::npos) {
      cout << "Match found at position: " << index << endl;
      pos = index + 1; //new position is from next element of index
   }
}