#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> a;
    a.insert(5);
    a.insert(7);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(7);
    // Print data
    for (auto x : a)
        cout << x << " ";
    cout << endl;

    cout<<"Size of the Multiset: "<<a.size()<<endl;
    //Erase data
    //erase O(logn)
    // erase all occurrence
    a.erase(4);
    cout<<"Erase After 4"<<endl;
    for (auto x : a)
        cout << x << " ";
    cout << endl;

    // erase a single occurrence
    a.erase(a.find(7));
    cout<<"Erase After 7"<<endl;
    for (auto x : a)
        cout << x << " ";
    cout << endl;

    //find O(logn)
    if(a.find(5)!=a.end())
    {
        cout<<"5 is found"<<endl;
    }
    else
    {
        cout<<"5 Not found"<<endl;
    }
}