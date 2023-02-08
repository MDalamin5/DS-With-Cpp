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

    vector<int>ans=QuickSort(a);

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}
vector<int>QuickSort(vector<int>a)
{
    if(a.size()<=1)
    return a;
//cout<<"hello\n";
    int pevote=a.size()-1;
    //cout<<a[a.size()-1];
    vector<int>b;
    vector<int>c;
    
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
    vector<int>sotred_b=QuickSort(b);
    vector<int>sotred_c=QuickSort(c);
    vector<int>sorted_a;
    for(int i=0;i<sotred_b.size();i++)
    {
        sorted_a.push_back(sotred_b[i]);
    }
    sorted_a.push_back(a[pevote]);

    for(int i=0;i<sotred_c.size();i++)
    {
        sorted_a.push_back(sotred_c[i]);
    }
    

    return sorted_a;
}