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
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(a[i]!=a[j])
        {
            i++;
        }
        a[i]=a[j];
    }
    int newSize=i+1;

   for(int i=0;i<newSize;i++)
    cout<<a[i]<<" ";
}