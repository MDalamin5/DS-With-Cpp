#include<bits/stdc++.h>
using namespace std;
void sortt(long long int arr[],int size);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    cin>>arr[i];
    sortt(arr,n);
    int ans=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]!=arr[i])
        ans++;
    }
    cout<<ans;
}
void sortt(long long int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}