#include<bits/stdc++.h>
using namespace std;
int FindMax(int arr[],int indx, int sz);
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    cin>>nums[i];

    cout<<FindMax(nums,0,n);
}
int FindMax(int arr[],int indx,int sz)
{
    if(indx==sz-1)
    return arr[indx];
    int possible_max= FindMax(arr,indx+1,sz);
    if(arr[indx]>possible_max)
    {
        return arr[indx];
    }
    else
    return possible_max;
}