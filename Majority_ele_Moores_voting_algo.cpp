#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a[] = {2, 2, 1, 1, 1, 2,1,4,4,4,4,4};
    int n = sizeof(a) / sizeof(a[0]);

    int freq = 0;
    int majority=a[0];
    for (int i = 0; i < n; i++)
    {
        if (freq==0)
        {
            majority=a[i];
          
        }
        if (majority==a[i])
        {
            freq++;
        }
        else{
            freq--;
        }
       
        
    }
    cout<<majority<<endl;
}