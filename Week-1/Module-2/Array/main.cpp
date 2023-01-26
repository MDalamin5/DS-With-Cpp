#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int nums[10];
    int sum=0;
    cout<<"Enter array elements: \n";
    for(int i=0;i<10;i++)
    {
        cin>>nums[i];
        sum+=nums[i];
    }
    cout<<"The sum is: "<<sum;
}