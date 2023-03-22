#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];

    int maxx= *max_element(a.begin(),a.end());
    int minn= *min_element(a.begin(),a.end());
    cout<<"Minum elements: "<<minn<<endl;
    cout<<maxx<<endl;
}