#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    cin>>l>>r;
    a.erase(a.begin()+l-1,a.begin()+r);

    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
}