#include <bits/stdc++.h>
using namespace std;
// leet code 169
int main()
{
    int a[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);
    sort(&a[0], &a[n - 1]);

    int freq = 0;
    int majority=a[0];
    for (int i = 0; i < n; i++)
    {
        if (freq>n/2)
        {
            cout<<a[i]<<endl;
            break;
        }
        if (a[i]!=majority)
        {
            majority=a[i];
        }
        else{
            freq++;
        }
        
        
    }
}