#include <bits/stdc++.h>
using namespace std;
vector<int>quickSort(vector<int>a);
int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int>ans=quickSort(a);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}
vector<int>quickSort(vector<int>a)
{
    if(a.size()<=1)
    return a;
    vector<int>b;
    vector<int>c;
    int pevote=a.size()-1;
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
    vector<int>sorted_b=quickSort(b);
    vector<int>sorted_c=quickSort(c);
    vector<int>sorted_a;
    for(int i=0;i<sorted_b.size();i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pevote]);
    for(int i=0;i<sorted_c.size();i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
}