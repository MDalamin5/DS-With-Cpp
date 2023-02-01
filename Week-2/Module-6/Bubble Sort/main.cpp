#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        bool sorted=true;
        int pass=n-i;
        for(int j=0;j<pass-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sorted=false;

            }
        }
        if(sorted)
        break;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}