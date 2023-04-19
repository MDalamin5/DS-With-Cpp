#include <bits/stdc++.h>
using namespace std;
int prece(char ch);
int getMyResult(string str);
int main()
{
    string inp;
    cin >> inp;
    string ans = "";
    stack<char> stk;
    for (int i = 0; i < inp.size(); i++)
    {
        char now = inp[i];
        if (now >= '0' && now <= '9')
        {
            ans += now;
        }
        else if (now == '(')
        {
            stk.push(now);
        }
        else if (now == ')')
        {
            while (stk.top() != '(')
            {
                ans += stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else
        {
            while (stk.size() && prece(stk.top()) >= prece(now))
            {
                ans += stk.top();
                stk.pop();
            }
            stk.push(now);
        }
    }
    while (stk.size())
    {
        ans += stk.top();
        stk.pop();
    }
    // cout<<ans<<endl;
    cout << getMyResult(ans) << endl;
}
int prece(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else
        return -1;
}
int getMyResult(string ans)
{
    stack<int> stk;
    for (int i = 0; i < ans.size(); i++)
    {
        char now = ans[i];
        if (isdigit(now))
        {
            stk.push(now - '0');
        }
        else
        {
            int val1 = stk.top();
            stk.pop();
            int val2 = stk.top();
            stk.pop();
            switch (now)
            {
            case '+':
                stk.push(val2 + val1);
                break;
            case '-':
                stk.push(val2 - val1);
                break;
            case '*':
                stk.push(val2 * val1);
                break;
            case '/':
                stk.push(val2 / val1);
                break;
            }
        }
    }
    return stk.top();
}