#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector<int>a(size);

    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a.size()-i;j++)
        {
            if(a[j+1] < a[j]){
                swap(a[j+1],a[j]);
            }
            
        }
    }

    for(int i=0;i<size;i++)
    {
       cout<<a[i]<<" ";
    }

    //code is not working
}