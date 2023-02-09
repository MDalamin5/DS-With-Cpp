#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<(n*(n+1)/2)-sum;
}