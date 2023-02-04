#include<bits/stdc++.h>
using namespace std;
int n,k;
bool found=false;
vector<int>mrgSort(vector<int>a);

int main()
{
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++)
     cin>>a[i];
     cin>>k;
    vector<int>ans=mrgSort(a);
    if(found)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}
vector<int>mrgSort(vector<int>a)
{
    if(a.size()<=1)
    {
        return a;
    }
    int mid=a.size()/2;
    vector<int>b;
    vector<int>c;
    for(int i=0;i<mid;i++)
    b.push_back(a[i]);
    for(int i=mid;i<a.size();i++)
    c.push_back(a[i]);

    vector<int>sorted_b=mrgSort(b);
    vector<int>sorted_c=mrgSort(c);
    int indz1=0,indz2=0;
    vector<int>sorted_a;
    for(int i=0;i<a.size();i++)
    {
        if(indz1==sorted_b.size())
        {
            sorted_a.push_back(sorted_c[indz2++]);
        }
        else if(indz2==sorted_c.size())
        {
            sorted_a.push_back(sorted_b[indz1++]);
        }
        else if(sorted_b[indz1]<sorted_c[indz2])
        {
            sorted_a.push_back(sorted_b[indz1++]);
        }
        else
        {
            sorted_a.push_back(sorted_c[indz2++]);
        }
    }
    if(sorted_a.size()==n)
    {
        int i=0,j=n-1;
        while(i<j)
        {
            if(sorted_a[i]+sorted_a[j]>k)
            {
                j--;
            }
            else if(sorted_a[i]+sorted_a[j]<k)
            {
                i++;
            }
            else
            {
                found=true;
                break;
            }
        }
    }
    return sorted_a;
}