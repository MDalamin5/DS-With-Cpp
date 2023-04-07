#include<bits/stdc++.h>
using namespace std;
int prec(char ch)
{
    if(ch=='/' || ch == '*')
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    string s;
    cin>>s;
    string res="";
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
      char now = s[i];
      if(now>='a'&& now<='z')
      {
        res +=now;
      }
      else
      {
        if(now == '+' || now == '-' || now == '*' || now == '/')
        {
            while(st.size() && prec(st.top())>=prec(now))
        {
            res += st.top();
            st.pop();
        }
        st.push(now);
        }
      }
    }
    while(st.size())
    {
        res += st.top();
        st.pop();
    }
    cout<<res<<endl;
}