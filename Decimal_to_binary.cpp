#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int result = 0;
    int i = 1;
    while (n > 0)
    {
        int temp = n % 2;
        result = result + i * temp;
        n /= 2;
        i*=10;
    }
        cout << result << endl;
}