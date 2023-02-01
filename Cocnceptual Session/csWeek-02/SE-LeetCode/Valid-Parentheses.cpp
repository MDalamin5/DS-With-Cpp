#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool isValid(string s)
    {
        int n=s.size();
        vector<char>v;
        for(int i=0;i<n;i++)
        {
            if((int)v.size()==0)
            {
                v.push_back(s[i]);
            }
            else
            {
                char ch = v.back();
                if(ch=='['&& s[i]==']')
                v.pop_back();
                else if(ch=='{'&& s[i]=='}')
                v.pop_back();
                else if(ch=='('&& s[i]==')')
                v.pop_back();
                else
                v.push_back(s[i]);

            }
        }
        if(v.size()==0)
        return true;
        else 
        return false;
    }
};

int main()
{
    string str;
    cin>>str;
    Solution sln;
    if(sln.isValid(str))
    cout<<"true";
    else
    cout<<"false";
}