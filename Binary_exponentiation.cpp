#include<bits/stdc++.h>
using namespace std;

int main(){
    double x;
    int n;

    cin>>x>>n;

    double ans=1;
   
    while (n>0)
    {
       if (n%2==1)
       {
        ans*=x;
       }

       x*=x;
       n/=2;
       
        
    }
    cout<<ans<<endl;
}