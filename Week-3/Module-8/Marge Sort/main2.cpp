#include<bits/stdc++.h>
using namespace std;
void margeSort(int arr[],int sz);
void marge2array(int a[],int b[],int n1,int n2);
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    margeSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void margeSort(int arr[],int sz)
{
    //cout<<"hello"<<sz++<<"\n";
    if(sz<=0)
    {
        return;
    }
    
        int mid=sz/2;
        int b[mid];
        int c[sz-mid];

    for(int i=0;i<mid;i++)
    {
        b[i]=arr[i];
    }
    int index=0;
    for(int i=mid;i<sz;i++)
    {
        c[index++]=arr[i];
       
    }
    
    margeSort(b,mid);
    margeSort(c,index);
    marge2array(b,c,mid,index);
    
  
}
void marge2array(int a[],int b[],int n1,int n2)
{
    int marge_ab[n1+n2];
    int inx1=0,inx2=0;
    for(int i=0;i<(n1+n2);i++)
    {
        if(inx1==n1)
        {
            marge_ab[i]=b[inx2];
            inx2++;
        }
        else if(inx2==n2)
        {
            marge_ab[i]=a[inx1];
            inx1++;
        }
        else if(a[inx1]<b[inx2])
        {
            marge_ab[i]=a[inx1];
            inx1++;
        }
        else
        {
            marge_ab[i]=b[inx2];
            inx2++;
        }
    }
    /*
     for(int i=0;i<(n1+n2);i++)
    cout<<marge_ab[i]<<" ";
    */
   
}