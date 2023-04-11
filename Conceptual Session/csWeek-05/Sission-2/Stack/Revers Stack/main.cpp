#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int> stk;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        stk.push(x);
    }
    while (stk.empty()==false)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    
}