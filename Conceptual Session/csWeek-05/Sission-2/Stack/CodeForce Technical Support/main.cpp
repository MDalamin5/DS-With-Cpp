#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int sz;
        cin>>sz;
        string str;
        cin>>str;
        stack<char>ch;
        for(int i=0;i<sz;i++)
        {
            if(str[i]=='Q')
            {
                ch.push(str[i]);
            }
            else
            {
                if(ch.empty()==false)
                {
                    ch.pop();
                }
            }
        }
        if(ch.empty())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}