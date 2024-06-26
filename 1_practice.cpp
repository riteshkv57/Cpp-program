#include<iostream>
#include<vector>
#include<algorithm>
#include <string>

using namespace std;

 int minOperations(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 0;
        // sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
            nums[i+1]++;
            count++;
            }
            else if(nums[i]>nums[i+1]){
                int k=nums[i]-nums[i+1];
                nums[i+1]+=k+1;
                count+=k+1;
            }
        }
        return count;
    }

int minSumKAvoidingArray(int n, int k) {
    vector<int> dp(n + 1, 0);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[max(i - k, 0)];
    }

    return dp[n];
}

int main(){
//   double numerator,denominator,k;
// //   double k=numerator;
// //   double
//    cin>> numerator>>denominator;
//    k=numerator/denominator;
//    string str="";
//    int bit=k>>1;
//    str=bit+'0';
//    cout<<str<<endl;

// ******************
// vector<int> nums;
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     nums.push_back(x);
// }
// cout<<minOperations(nums)<<endl;
//    string numberStr(22, '9'); // Create a string with 29 repetitions of '9'

//     string doubleStr; // String to store the doubled number

//     int carry = 0;
//     for (int i = numberStr.size() - 1; i >= 0; i--) {
//         int digit = numberStr[i] - '0';
//         int doubledDigit = 2 * digit + carry;
//         carry = doubledDigit / 10;
//         doubleStr = char(doubledDigit % 10 + '0') + doubleStr;
//     }

//     if (carry > 0) {
//         doubleStr = char(carry + '0') + doubleStr;
//     }

//     cout << "Double of the number: " << doubleStr << endl;

//     return 0;

  int n = 5;
    int k = 4;
    int result = minSumKAvoidingArray(n, k);
    cout << "Minimum sum of a k-avoiding array: " << result << endl;
    return 0;
}