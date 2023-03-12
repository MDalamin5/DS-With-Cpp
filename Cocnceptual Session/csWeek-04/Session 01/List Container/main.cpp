#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    for(int i=0;i<5;i++)
    l.push_back(rand()%100);

    for(auto it=l.begin(); it!= l.end();it++)
    {
        cout<<*it<<" ";
    }
    l.sort();
    cout<<endl;
    for(auto it=l.begin(); it!= l.end();it++)
    {
        cout<<*it<<" ";
    }
}