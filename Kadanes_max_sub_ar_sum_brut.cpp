#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,-2,3,4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
int currentSum=0;
int maxSum=INT_MIN;
for (int i = 0; i < n; i++)
{
    currentSum+=arr[i];
    maxSum=max(currentSum,maxSum);
    if (currentSum<0)
    {
        currentSum=0;
    }
    
}
cout<<maxSum;


}