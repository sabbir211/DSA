#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, -4, -5};
    // int arr[] = {4, 2, -2, -1, 3, 10, -12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxi = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;

        for (int end = start; end < n; end++)
        {

            currentSum += arr[end];
            maxi = max(maxi, currentSum);
        }
        // cout << endl;
    }
    cout << maxi << endl;
}