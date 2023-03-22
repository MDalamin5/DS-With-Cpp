#include<bits/stdc++.h>
using namespace std;
void print(list<int>l)
{
    auto a = l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<endl;
}
int getValue(int index, list<int>l)
{
    auto a = l.begin();
    advance(a,index);
    if(*a<0)
    return -1;
    else 
    return *a;
}
int main()
{
    list<int>l;
    l.push_front(3);
    l.push_back(2);
    l.push_back(6);
    l.push_back(4);
    l.push_back(5);
    //print(l);
    cout<<getValue(2,l);
}