#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<string>q;
    q.push("1");
    for(int i=1;i<=n;i++)
    {
        string temp=q.front();
        cout<<i<<"-> "<<temp<<endl;
        q.pop();
        q.push(temp+"0");
        q.push(temp+"1");

    }
}