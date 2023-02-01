#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int flag=0;
        int target;
        
        cin>>target;
        int low=0;
        int high=(int)a.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(a[mid]==target)
            {
                flag=1;;
                break;
            }
            if(a[mid]<target)
            low=mid+1;
            else
            high=mid-1;
        }
        if(flag==1)
        cout<<"YES";
        else
        cout<<"NO";
    }
}