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
        int n;
        cin>>n;
        list<int>l;
        vector<int>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int i=0;
        while(i<n)
        {
            if(i==0)
            {
                l.push_front(v[i]);
                i++;
            }
            else
            {
                if(v[i]<l.front())
                {
                    l.push_front(v[i]);
                }
                else
                {
                    l.push_back(v[i]);
                }
                i++;
            }
        }

        while(!l.empty())
        {
            cout<<l.front()<<" ";
            l.pop_front();
        }
        cout<<endl;
    }
    return 0;
}