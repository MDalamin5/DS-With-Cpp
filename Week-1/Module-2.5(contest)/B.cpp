#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=1;
    cin>>s;
   int max=1;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            if(count>=max)
            {
                max=count;
            }
        }
        else if(s[i]!=s[i]+1)
        count=1;
    }
    cout<<max<<endl;

}