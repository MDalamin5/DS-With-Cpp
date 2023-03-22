#include<bits/stdc++.h>
using namespace std;
bool search(int value, list<int>l)
{
    auto a = l.begin();
    while(a!=l.end())
    {
        if(*a==value)
        {
            return true;
        }
        a++;
    }
    return false;
}
int main()
{
    list<int>l;
    l.push_front(3);
    l.push_back(2);
    l.push_back(6);
    l.push_back(4);
    l.push_back(5);
    if(search(4,l)==1)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
}