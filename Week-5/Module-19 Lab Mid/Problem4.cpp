#include<bits/stdc++.h>
using namespace std;
bool isPalindrom(string s, int low, int high);
int main()
{
    string str;
    cin>>str;
    if(isPalindrom(str,0,str.length()-1))
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
}
bool isPalindrom(string s, int low, int high)
{
    if(low>=high)
    return true;
    if(s[low]!=s[high])
    return false;

    return isPalindrom(s,low+1,high-1);
}