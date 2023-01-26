#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int a=10,b=13,c=11;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    int mini=min(a,b);
    cout<<mini<<endl;
    cout<<max(a,b)<<endl;
    int maxyy=max({a,b,c});
    cout<<maxyy;
    vector<int> v;
    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    //reverse(v.begin(),v.end());
     //sort(v.begin(),v.end());
     //sort(v.begin()+1, v.begin()+3+1);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
}