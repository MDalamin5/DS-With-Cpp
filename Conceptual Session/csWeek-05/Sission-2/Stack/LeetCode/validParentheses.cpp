#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>ch;
    for(int i=0;i<s.size();i++)
    {
        char now= s[i];
        if(now=='(' || now== '{' || now=='[')
        {
            ch.push(now);
        }
        else if(!ch.empty() && now == ')' || now == '}' || now == ']')
        {
            ch.pop();
        }
    }
}