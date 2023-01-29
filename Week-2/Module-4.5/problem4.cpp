#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    vector<int>a1(n1);
    for(int i=0;i<n1;i++)
    cin>>a1[i];

    cin>>n2;
    vector<int>a2(n2);
    for(int i=0;i<n2;i++)
    cin>>a2[i];

    vector<int>output;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(a1[i]==a2[j])
            output.push_back(a1[i]);
        }
    }

    if(output.size()==0)
    cout<<" ";
    else
    {
        for(int i=0;i<output.size();i++)
        {
            cout<<output[i]<<" ";
        }
    }

    
}