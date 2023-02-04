#include<bits/stdc++.h>
using namespace std;
vector<int>margSort(vector<int>a);
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int>ans=margSort(a);
    for(auto x:ans)
    cout<<x<<" ";
}
vector<int>margSort(vector<int>a)
{
    if(a.size()<=1)
    return a;

    vector<int>b;
    vector<int>c;
    int mid=a.size()/2;
    for(int i=0;i<mid;i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid;i<a.size();i++)
    {
        c.push_back(a[i]);
    }

   vector<int> sorted_b=margSort(b);
   vector<int> sorted_c=margSort(c);
    vector<int>sorted_a;
    int indx1=0,indx2=0;
    for(int i=0;i<a.size();i++)
    {
        if(indx1==sorted_b.size())
        {
            sorted_a.push_back(sorted_c[indx2++]);
        }
        else if(indx2==sorted_c.size())
        {
             sorted_a.push_back(sorted_b[indx1++]);
        }
        else if(sorted_b[indx1]<sorted_c[indx2])
        {
            sorted_a.push_back(sorted_b[indx1++]);
        }
        else
        {
            sorted_a.push_back(sorted_c[indx2++]);
        }
    }
    return sorted_a;

}