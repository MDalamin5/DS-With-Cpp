#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    long long int move=0;
    
        for(long long int i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                move+=arr[i]-arr[i+1];
                arr[i+1]=arr[i];
            }
        }

    cout<<move;
}
