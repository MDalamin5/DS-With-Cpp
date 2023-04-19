#include<bits/stdc++.h>
using namespace std;
int prece(char ch);
int main()
{
    string inp;
    cin>>inp;
    string ans="";
    stack<char>stk;
    for(int i=0;i<inp.size();i++)
    {
        char now = inp[i];
        if(now>='a'&& now<='z')
        {
            ans+=now;
        }
        else if(now =='(')
        {
            stk.push(now);
        }
        else if(now==')')
        {
            while(stk.top()!='(')
            {
                ans+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else
        {
            while(stk.size() && prece(stk.top())>=prece(now))
            {
                ans +=stk.top();
                stk.pop();
            }
            stk.push(now);
        }
    }
    while(stk.size())
    {
         ans+=stk.top();
        stk.pop();
    }
    cout<<ans<<endl;
}
int prece(char ch)
{
    if(ch=='+' || ch=='-')
    return 1;
    else if(ch=='*' || ch=='/')
    return 2;
    else 
    return -1;
}