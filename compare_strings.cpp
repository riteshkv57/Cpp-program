#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hellos";
    string str2 = "Hello";

    // Using compare() function
    // int result = str1.compare(str2);
    // cout<<result;
    // if (result == 0) {
    //     cout << "str1 is equal to str2" << endl;
    // } else if (result < 0) {
    //     cout << "str1 is less than str2" << endl;
    // } else {
    //     cout << "str1 is greater than str2" << endl;
    // }

    // Using comparison operators
    if (str1 == str2) {
        cout << "str1 is equal to str2" << endl;
    } else if (str1 < str2) {
        cout << "str1 is less than str2" << endl;
    } else {
        cout << "str1 is greater than str2" << endl;
    }

    return 0;
}