#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,product=1;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2!=0)
        product*=a[i];
    }
    cout<<product;
}