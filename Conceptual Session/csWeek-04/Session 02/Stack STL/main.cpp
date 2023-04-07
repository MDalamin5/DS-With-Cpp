#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>numst;
    for(int i=0;i<5;i++)
    {
        numst.push(10*i);
    }
    cout<<numst.empty()<<endl;
    if(numst.empty()==false)
    {
        numst.pop();
    }
    while(!numst.empty())
    {
        cout<<numst.top()<<" ";
        numst.pop();
    }

}