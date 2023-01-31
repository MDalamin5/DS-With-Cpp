#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    //vector<int> :: iterator it;
    //auto it=a.begin();
    //for(auto it=a.begin();it!=a.end();it++)
    //cout<<*it<<" ";
    sort(a.rbegin(),a.rend());
    for(auto val:a)
    cout<<val<<" ";

    //a.clear();
    //cout<<a.size();
    
}