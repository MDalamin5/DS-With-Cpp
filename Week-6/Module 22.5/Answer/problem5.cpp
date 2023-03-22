#include<bits/stdc++.h>
using namespace std;
int prec(char ch)
{
   if(ch=='*' || ch== '/')
   return 1;
   else
   return 0;
}
int main()
{
    string s;
    cin>>s;
    stack<char>stk;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        char now = s[i];
        if(now>= 'a' && now<= 'z')
        {
            ans += now;
        }
        else
        {
            while(stk.size() && prec(stk.top())>= prec(now))
            {
                ans +=stk.top();
                stk.pop();
            }
            stk.push(now);
        }
    }
    while(stk.size())
    {
        ans += stk.top();
        stk.pop();
    }
    cout<<ans;
}