#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]==s[1] && s[1]==s[2])
    cout<<1<<endl;
    else if(s[0]==s[1] || s[1]==s[2] || s[0]==s[2])
    cout<<3<<endl;
    else
    cout<<6<<endl;
    /*
int arr[123]={0};
    int count=0,more1=0;
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]]++;
    }
    for(int i=97;i<123;i++)
    {
        if(arr[i]==1)
        count++;
        else if(arr[i]>0)
        more1++;
    }
    cout<<count+more1;
    */
    
}