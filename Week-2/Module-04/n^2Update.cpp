#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++)
    {
        string ans="No";
        for(int j=i+1;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                ans="Yes";
            }
        }
        cout<<"i = "<<i<<" "<<ans<<"\n";
    }
}