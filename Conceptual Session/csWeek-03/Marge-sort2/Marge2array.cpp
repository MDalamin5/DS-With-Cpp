#include<bits/stdc++.h>
using namespace std;
void margeArray(int a[],int b[],int n1,int n2);
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    cin>>a[i];
    for(int i=0;i<n2;i++)
    cin>>b[i];
/*
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
    */
    margeArray(a,b,n1,n2);
}
void margeArray(int a[],int b[],int n1,int n2)
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
    for(int i=0;i<(n1+n2);i++)
    cout<<marge_ab[i]<<" ";
}