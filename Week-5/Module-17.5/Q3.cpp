#include<bits/stdc++.h>
using namespace std;
int febo(int n);
int main()
{
    int n;
    cin>>n;
    cout<<febo(n);
}
int febo(int n)
{
    if(n<=1)
    return n;
    return febo(n-1)+febo(n-2);
}