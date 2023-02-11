#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k;
    cin>>k;

    int low=0;
    int high=a.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(k==a[mid])
        {
            cnt++;
            low=mid+1;
        }
        if(k<a[mid])
        {
            high=mid-1;
        }
        else
        low=mid+1;
    }
    if(cnt>=2)
    {
        cout<<"YES";
        return 0;
    }
    low=0;
    high=a.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(k==a[mid])
        {
            cnt++;
            high=mid-1;
        }
        if(k<a[mid])
        {
            high=mid-1;
        }
        else
        low=mid+1;
    }
    if(cnt>=3)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
}