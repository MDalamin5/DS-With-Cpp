#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    stack<char>stk;
    for(int i=0;i<str.length();i++)
    {
        char now = str[i];
        if(now=='(' || now == '{' || now == '[')
        {
            stk.push(now);
        }
        else
        {
            if(stk.empty())
            {
                cout<<"Invalid Sequecnce"<<endl;
                return 0;
            }
            if(now== ')' && stk.top()== '(')
            {
                stk.pop();
            }
            else if(now== '}' && stk.top()== '{')
            {
                stk.pop();
            }
            else if(now== ']' && stk.top()== '[')
            {
                stk.pop();
            }
            else
            {
                cout<<"Invalid Sequence"<<endl;
                return 0;
            }
        }
    }
    if(stk.empty())
    {
        cout<<"Valid bracket sequence bhaia"<<endl;
    }
    else
    {
        cout<<"Invalid bhaia"<<endl;
    }
}