#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);

     int test;
     cin>>test;
     while(test--)
     {
        int n,m;
        cin>>n>>m;
        list<int>l;
        int long long sum=0;
        for(int i=0;i<n;i++)
        {
            int in;
            cin>>in;
            l.push_back(in);
            sum+=in;
        }
        l.sort();
        for(int i=0;i<m;i++)
        {
            int in;
            cin>>in;
            sum -=l.front();
            sum +=in;
            l.pop_front();
            l.push_front(in);
            l.sort();
        }
        cout<<sum<<endl;

     }
}