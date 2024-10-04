#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 7, 8, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 105;
    int j = n-1;
    int i=0;
    while (i!=j)
    {
        if (arr[i]+arr[j]==target)
        {
            cout<<i<<","<<j;
            break;
        }
        else if (arr[i]+arr[j]<target)
        {
            i++;
        }
        else{
            j--;
        }
        
    }
    
}