#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s ="Md_Al_Amin";
    cout<<s[1];
    cout<<s.size()<<endl;
    /*
    for(int i=0;i<s.size();i++)
    {
        s[i]+=1;
    }
    */
   //s.pop_back();
   s.erase(s.begin()+1);
    cout<<s;
}