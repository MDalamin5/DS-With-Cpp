#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
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
    */
    int n;
    cout<<"Enter The value of n: ";
    cin>>n;
    vector<pair<pair<string,string>,int>> v;
    cout<<"Enter The User info.."<<endl;
    
    //v.push_back({{"Md","Al Amin"},24});
    for(int i=0;i<n;i++)
    {
        string firstName,lastName;
        int age;
        cout<<"Enter user first Name: ";
        cin>>firstName>>lastName;
        cout<<"Enter Age: ";
        cin>>age;
        v.push_back({{firstName,lastName},age});
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first.first<<" "<<v[i].first.second<<endl;
        cout<<v[i].second<<endl;
    }
}