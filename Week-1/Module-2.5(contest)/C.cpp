#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        nums[i]=temp--;
    }
    if(n==2 || n==3)
    cout<<"NO SOLUTION";
    else
    {
        if(n%2!=0)
        {
            for(int i=1;i<n;i=i+2)
            {
                cout<<nums[i]<<" ";
            }
            for(int i=0;i<n;i=i+2)
            {
                cout<<nums[i]<<" ";
            }

        }
        else
        {
            for(int i=0;i<n;i=i+2)
            {
                cout<<nums[i]<<" ";
            }
            for(int i=1;i<n;i=i+2)
            {
                cout<<nums[i]<<" ";
            }
        }
    }
}
