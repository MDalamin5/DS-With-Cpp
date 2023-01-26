#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//string remove1stlast(string ss);
void remove1stlastc(string &s);
int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    remove1stlastc(s);
    cout<<s<<endl;
    //cout<<remove1stlast(s)<<endl;
}
//string remove1stlast(string ss)
//{
  //  ss.pop_back();
  //  ss.erase(ss.begin());
  //  return ss;
//}
void remove1stlastc(string &s)
{
    s.pop_back();
    s.erase(s.begin());
    cout<<s<<endl;
}