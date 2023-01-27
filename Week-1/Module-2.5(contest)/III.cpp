#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,input;
    cin>>n;
    vector<int>a;
    a.resize(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    int ans=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]!=a[i])
        ans++;
    }
    cout<<ans<<"\n";
}