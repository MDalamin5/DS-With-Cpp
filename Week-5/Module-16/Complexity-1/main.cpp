#include<bits/stdc++.h>
using namespace std;
void data();
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]; 
    }
}
//time comp= O(n)
//space com = O(n)

void data()
{
    int n;
    cin>>n;
    vector<int>a(n*n);
    for(int i=0;i<n*n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n*n;i++)
    {
        sum+=a[i]; 
    }
}
//time comp= O(n^2)
//space com = O(n^2)