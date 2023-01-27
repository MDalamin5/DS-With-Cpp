#include<bits/stdc++.h>
using namespace std;
int sortAndMcount(int arr[],int size);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int move= sortAndMcount(arr,n);
    cout<<move;
}
int sortAndMcount(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                count++;
            }
        }
    }
    return count;
}