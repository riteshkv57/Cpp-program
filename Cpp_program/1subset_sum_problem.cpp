#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int wt[10];
    int arr[10];
    int val[10];
    int t[10][10];
    int sum;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }

    // boolean

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = max(val[i-1]+t[i - 1][j - arr[i - 1]],
                          t[i - 1][j]);
            }
            else
                t[i][j] = t[i - 1][j];
        }
    }
}


