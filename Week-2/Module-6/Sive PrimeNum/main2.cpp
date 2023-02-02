#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>prime;
    vector<bool>visit(n+1);
    for(int i=2;i<=n;i++)
    {
        if(visit[i]==false)
        {
            prime.push_back(i);
            for(int x=2;x*i<=n;x++)
            {
                visit[x*i]=true;
            }
        }
    }
    for(auto x:prime)
    cout<<x<<" ";
}