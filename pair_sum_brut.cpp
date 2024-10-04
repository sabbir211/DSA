#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 5, 7, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 16;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i+1 << "," << j+1;
            }
        }
    }

}