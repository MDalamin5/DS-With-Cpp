#include<bits/stdc++.h>
using namespace std;
vector<int>QuickSort(vector<int>a);
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int>ans= QuickSort(a);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
}
vector<int>QuickSort(vector<int>a)
{
    if(a.size()<=1)
    return a;

    int pevote= a.size()-1;
    vector<int>b,c;
    for(int i=0;i<a.size();i++)
    {
        if(i==pevote)
        {
            continue;
        }
        if(a[i]<=a[pevote])
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    vector<int>sorted_b=QuickSort(b);
    vector<int>sorted_c=QuickSort(c);
    vector<int>sorted_a;
    for(int i=0;i<sorted_b.size();i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pevote]);
    for(int j=0;j<sorted_c.size();j++)
    {
        sorted_a.push_back(sorted_c[j]);
    }
    return sorted_a;

}