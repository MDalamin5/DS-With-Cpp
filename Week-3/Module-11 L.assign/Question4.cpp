#include<bits/stdc++.h>
using namespace std;
vector<int>meargeSort(vector<int>a);
int main()
{
    int n,cnt=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];

    int n2;
    cin>>n2;
    vector<int>b(n2);
    for(int i=0;i<n2;i++)
    cin>>b[i];

    vector<int>sorted_a=meargeSort(a);
    vector<int>sorted_b=meargeSort(b);
    //for(int i=0;i<n;i++)
    //cout<<sorted_a[i]<<" ";

    int i=0 ,j=0;
    while(i<sorted_a.size() && j<sorted_b.size())
    {
        if(sorted_a[i]==sorted_b[j])
        {
            //cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            //j++;
            cnt++;
        }
        j++;
        //else {
            //cout<<a[i]<<" "<<a[j]<<endl;
            //j++;
        //}
        
    }
    if(cnt==sorted_a.size())
    cout<<"YES";
    else
    cout<<"NO";
}
vector<int>meargeSort(vector<int>a)
{
    if(a.size()<=1)
    return a;

    int mid=a.size()/2;
    vector<int>b,c;
    for(int i=0;i<mid;i++)
    b.push_back(a[i]);

    for(int i=mid;i<a.size();i++)
    c.push_back(a[i]);
    vector<int>sorted_b=meargeSort(b);
    vector<int>sorted_c=meargeSort(c);
    vector<int>sorted_a;
    int indx1=0,indx2=0;
    for(int i=0;i<a.size();i++)
    {
        if(sorted_b.size()==indx1)
            sorted_a.push_back(sorted_c[indx2++]);
        else if(sorted_c.size()==indx2)
        sorted_a.push_back(sorted_b[indx1++]);
       else if(sorted_b[indx1]<sorted_c[indx2])
        sorted_a.push_back(sorted_b[indx1++]);
        else
        sorted_a.push_back(sorted_c[indx2++]);
    }
    return sorted_a;
}