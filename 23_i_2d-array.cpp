#include<iostream>
#include<vector>
using namespace std;
int main(){
int arr[3][4];


// to remove same-same rows in a 2d matrix
    vector<vector<int>> removeDuplicateRows(vector<vector<int>>& matrix) {
    set<vector<int>> uniqueRows; 
    vector<vector<int>> result;  

    for (const auto& row : matrix) {
        if (uniqueRows.find(row) == uniqueRows.end()) {
            uniqueRows.insert(row);
            result.push_back(row);
        }
    }

    return result;
    }


for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }

        for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<< " ";
        }
        cout<<endl;
    }

    for(int col=0;col<3;col++){
        if(col%2!=0){
            for(int i=3;i>=0;i--){
                cout<<arr[i][col]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=0;i<4;i++){
                cout<<arr[i][col]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;

}