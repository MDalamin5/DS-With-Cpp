#include<bits/stdc++.h>
using namespace std;
vector<int>even_generator(vector<int>a);
int main()
{

    vector<int>a={1,2,3,4,5};
   
    vector<int>ans=even_generator(a);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}
vector<int>even_generator(vector<int>a)
{
    vector<int>even_nums;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        {
            even_nums.push_back(a[i]);
        }
    }
    return even_nums;
}