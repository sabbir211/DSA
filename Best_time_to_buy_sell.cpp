#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minBuy = arr[0];
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (minBuy>arr[i-1])
        {
            minBuy=arr[i-1];
            profit=arr[i]-minBuy;
        }
        
    }
}