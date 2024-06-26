#include<iostream>
#include<vector>
using namespace std;

int printsum(int arr[][4],int row,int col){
     for(int i=0;i<row;i++){
        int sum=0;
    for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
}
}

int maxofsum(int arr[][4],int row,int col){
    int maxi=0;
     for(int i=0;i<row;i++){
        int sum=0;
    for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(maxi<sum)
        maxi=sum;
}
cout<<"Maximum sum of rows:"<<maxi<<endl;
}

int main(){
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
int arr[3][4];
// for input
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }

    // for output
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<< " ";
        }
        cout<<endl;
    }

// print sum of elements of a row
  printsum(arr, 3, 4);
  cout<<endl;

// printing maximum sum of row wise elements
maxofsum(arr,3,4);

    return 0;
}