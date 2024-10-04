#include <bits/stdc++.h>
using namespace std;
// leet code 169
int main()
{
    int a[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[j])
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            cout << a[i] << endl;
            break;
        }
    }
}