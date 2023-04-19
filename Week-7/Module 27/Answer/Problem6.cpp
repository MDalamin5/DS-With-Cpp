#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    deque<char>dq;
    for(int i=0;i<str.size();i++)
    {
        dq.push_back(str[i]);
    }
    bool result=true;
    for(int i=0;i<dq.size();i++)
    {
        if(dq.front()!=dq.back())
        {
            result = false;
            break;
        }
        dq.pop_front();
        dq.pop_back();
    }
    if(result)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}