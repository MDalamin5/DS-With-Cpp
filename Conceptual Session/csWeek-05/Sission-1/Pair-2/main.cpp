#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name and Age: ";
        string name;
        int age;
        cin>>name;
        cin>>age;
        v.push_back({name,age});
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}