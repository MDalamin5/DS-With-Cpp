#include<bits/stdc++.h>
using namespace std;
void reverseArr(vector<int>a);
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++)
    {
        swap(a[i],a[n-i-1]);
    }
    for(int x:a)
    cout<<x<<" ";
}