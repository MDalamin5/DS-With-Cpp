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
void deleteZero(list<int>&l)
{
    int index=-1;
    bool flag;
    auto a= l.begin();
    while(a!=l.end())
    {
        index=-1;
       auto b = l.begin();
       while(b!=l.end())
       {
        index++;
            if(*b==0)
        {
            //cout<<*a<<" ";
            advance(b,index);
            l.erase(b);
            //index--;
            break;
        }
        b++;
       }
        
        
        //index++;
        a++;
    }
}
int main()
{
    list<int>l;
    l.push_front(2);
    l.push_back(0);
    l.push_back(4);
    l.push_back(0);
    l.push_back(5);
    print(l);
    deleteZero(l);
    print(l);
}