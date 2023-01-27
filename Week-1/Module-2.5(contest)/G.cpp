#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    string s;
    cin>>l>>r;
    cin>>s;
    reverse(s.begin()+l-1,s.begin()+r);
    cout<<s;
}
