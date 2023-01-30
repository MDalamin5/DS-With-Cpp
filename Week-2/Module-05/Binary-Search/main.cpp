#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==k)
        cout<<"Yes"<<" "<<mid;
        if(a[mid]<k)
        low=mid+1;
        else
        high=mid-1;
    }
}