#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> stk;
    for(int i=0;i<s.size();i++)
    {
       char now = s[i];
       if(now== '(' || now== '{' || now== '[')
       {
        stk.push(now);
       }
       else
       {
          if(stk.size()==0)
          {
            cout<<"No"<<endl;
            return 0;
          }
          if(now == ')' && stk.top()=='(')
          {
            stk.pop();
          }
          else if(now=='}' && stk.top()=='{')
          {
            stk.pop();
          }
          else if(now == ']' && stk.top()=='[')
          {
            stk.pop();
          }
          else
          {
            cout<<"No"<<endl;
            return 0;
          }
       }
    }
    if(stk.empty())
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}