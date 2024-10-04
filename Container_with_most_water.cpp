#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, r = n-1;
    int maxWater = 0;
    while (r > l)
    {
        maxWater = max(maxWater, (min(arr[l], arr[r]) * (r - l)));

        if (arr[l] > arr[r])
            r--;
        else
            l++;
    }
    cout<<maxWater<<endl;
}