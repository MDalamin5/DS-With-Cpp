#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int maxx=a[0];
    int minn=a[0];
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        maxx=max(maxx,a[i]);
        minn=min(minn,a[i]);
        sum+=a[i];
    }
    cout<<"max= "<<maxx<<"\n";
    cout<<"max= "<<minn<<"\n";
    cout<<"max= "<<sum<<"\n";
}