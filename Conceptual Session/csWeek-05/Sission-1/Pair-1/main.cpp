#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<string,int>p;
    p.first="MD Al Amin";
    p.second= 24;
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    pair<pair<string,string>,int> pp;
    pp.first.first="Md ";
    pp.first.second="Al Amin";
    pp.second=24;
    cout<< pp.first.first<<" "<<pp.first.second<<" "<<pp.second<<endl;
    return 0;
}