#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int>a;
    for(int i=0;i<10;i++)
    {
        a.push_back(i);
    }
    /*for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }*/
    a.insert(a.begin()+0,33);
    a.insert(a.begin()+2,45);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    a.erase(a.begin()+1);
    cout<<endl;
    a.pop_back();
    a.push_back(32);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }


}