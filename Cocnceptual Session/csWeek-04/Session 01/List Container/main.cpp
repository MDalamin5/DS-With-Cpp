#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(72);
    l.push_front(30);
    for(auto it = l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
   l.sort();
   cout<<endl;
   for(auto it = l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
}