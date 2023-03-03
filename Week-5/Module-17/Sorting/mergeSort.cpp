#include<bits/stdc++.h>
using namespace std;
vector<int>margeSort(vector<int>a);
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>res = margeSort(a);
    for(int i=0;i<n;i++)
    {
       cout<<res[i]<<" ";
    }
}
vector<int>margeSort(vector<int>a)
{
    if(a.size()<=1)
    return a;

    int mid=a.size()/2;
    vector<int>left;
    vector<int>right;
    
    for(int i=0;i<mid;i++)
    {
        left.push_back(a[i]);
    }
    for(int i=mid;i<a.size();i++)
    {
        right.push_back(a[i]);
    }
    vector<int>sorted_left=margeSort(left);
    vector<int>sorted_right=margeSort(right);
    vector<int>sorted_a;
    int indx1=0,indx2=0;

    for(int i=0;i<a.size();i++)
    {
        if(indx1==sorted_left.size())
        {
            sorted_a.push_back(sorted_right[indx2++]);
        }
        else if(indx2==sorted_right.size())
        {
            sorted_a.push_back(sorted_left[indx1++]);
        }
        else if(sorted_left[indx1]<sorted_right[indx2])
        {
            sorted_a.push_back(sorted_left[indx1++]);
        }
        else
        {
            sorted_a.push_back(sorted_right[indx2++]);
        }
    }
    return sorted_a;
}