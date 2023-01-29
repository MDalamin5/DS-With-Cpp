#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==k)
        {
            cout<<"Yes";
            return 0;
        }
    }
}
/*
time complexcity O(n);
memory complexcity O(n);
*/