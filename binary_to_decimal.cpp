#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int result = 0;
    int pow = 1;

    while (n > 0)
    {
        int t = n % 10;
        result = result + t * pow;
        n /= 10;
        pow *= 2;
    }

    cout << result << endl;
}