#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=1;i<n;i++)
    {
        int index=i;
        {
            while(index>=1)
            {
                if(a[index-1]>a[index])
                {
                    swap(a[index-1],a[index]);
                    index--;
                }
                else
                break;
            }
        }
    }
    for(auto x:a)
    cout<<x<<" ";
}