#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>prime;
    vector<bool>vistd(n+1);
    for(int i=2;i<=n;i++)
    {
        if(vistd[i]==false)
        {
            prime.push_back(i);
            for(int x=2;i*x<=n;x++)
            {
                vistd[i*x]=true;
            }
        }
    }
    for(int i=0;i<prime.size();i++)
    cout<<prime[i]<<" ";
}