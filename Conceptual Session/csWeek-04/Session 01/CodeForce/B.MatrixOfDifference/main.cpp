
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
    for(int i=1;i<=(n*n);i++)
    {
        l.push_back(i);
    }
    int gird[n][n];
    for(int i=0;i<n;i++)
    {
        if((i+1)%2!=0)
        {
            for(int j=0;j<n;j++)
            {
                if((j+1)%2!=0)
                {
                    gird[i][j]=l.back();
                    l.pop_back();
                }
                else
                {
                    gird[i][j]=l.front();
                    l.pop_front();
                }
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                if((j+1)%2!=0)
                {
                    gird[i][j]=l.front();
                    l.pop_front();
                }
                else
                {
                    gird[i][j]=l.back();
                    l.pop_back();
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<gird[i][j]<<" ";
        }
        cout<<endl;
    }
    }
}