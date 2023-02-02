#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++)
    cin>>num[i];

    for(int i=0;i<n;i++)
    cout<<num[i]<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        for(int j=0;j<n-1;j++)
        {
            if(num[j+1]<num[j])
            swap(num[j+1],num[j]);
            cout<<num[j]<<" ";
        }
        
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<num[i]<<" ";
    

}