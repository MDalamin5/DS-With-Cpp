/*
    Total Function are
     1. push_forn
     2. push_back
     3. pop_front
     4. pop_back
     5. iteratior
     6. insert at any position
     7. delete at any pos
*/
#include<bits/stdc++.h>
using namespace std;
void print(list<int>l)
{
    //list<int>:: iterator a= l.begin();
    auto a= l.begin();
    while(a!=l.end())
    {
        cout<< *a<<" ";
        a++;
    }
    cout<<endl;
}
void insetAtAnyPos(list<int>&l, int pos, int value)
{
    auto a= l.begin();
    advance(a, pos);
    l.insert(a,value);
}
void deleteAtAnyPos(list<int> &l, int pos)
{
    auto a= l.begin();
    advance(a,pos);
    l.erase(a);
}
int main()
{
    list<int>l;
    l.push_front(10);
    l.push_front(20);
    print(l);
    l.push_back(30);
    l.push_back(50);
    l.push_back(60);
    print(l);
    l.pop_front();
    l.pop_back();
    print(l);
    insetAtAnyPos(l,2,55);
    deleteAtAnyPos(l,1);
    print(l);
    return 0;
}