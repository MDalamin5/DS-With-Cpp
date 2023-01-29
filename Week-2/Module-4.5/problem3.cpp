#include<bits/stdc++.h>
using namespace std;
char shiftUnit(char ch);
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        s[i]=shiftUnit(s[i]);
    }
    cout<<s;
}
char shiftUnit(char ch)
{
    if(ch+1>122)
    {
        int rem=122-ch;
        return 'a'+rem;
    }
    else
    return ch+1;
}