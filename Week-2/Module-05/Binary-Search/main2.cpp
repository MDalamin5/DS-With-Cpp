#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q;
    cin>>q;
    
    for(int i=0;i<q;i++)
    {
        cin>>n>>k;
        vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
        int low=0;
    int high=n-1;
    int flag=0;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==k)
        {
            cout<<"Yes "<<mid<<"\n";
            flag=1;
        }
        if(a[mid]<k)
            low=mid+1;
        else
           high=mid-1;
    }
    if(flag==0)
    {
        cout<<"Not found"<<endl;
    }
    }
    
}