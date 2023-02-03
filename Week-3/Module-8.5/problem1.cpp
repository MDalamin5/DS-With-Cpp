#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    vector<int>a(n1);
    for(int i=0;i<n1;i++)
    cin>>a[i];
    cin>>n2;
    vector<int>b(n2);
    for(int i=0;i<n2;i++)
    cin>>b[i];
    int indx1=0,indx2=0;
    vector<int>sorted_ab;
    for(int i=0;i<n1+n2;i++)
    {
        if(indx1==a.size())
        {
            sorted_ab.push_back(b[indx2]);
            indx2++;
        }
        else if(indx2==b.size())
        {
            sorted_ab.push_back(a[indx1]);
            indx1++;
        }
        else if(a[indx1]>b[indx2])
        {
            sorted_ab.push_back(a[indx1]);
            indx1++;
        }
        else
        {
            sorted_ab.push_back(b[indx2]);
            indx2++;
        }
    }
    for(int i=0;i<sorted_ab.size();i++)
    cout<<sorted_ab[i]<<" ";
}