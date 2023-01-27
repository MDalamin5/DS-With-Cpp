#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<(n*(n+1)/2)-sum;

}