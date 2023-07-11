#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Goru"] = 1;
    mp["Chagol"] = 2;
    mp["vara"] = 3;

    //value of a key
    cout<<mp["Goru"]<<endl;
    cout<<mp["vara"]<<endl;
    mp["Goru"] = 5;
    cout<<mp["Goru"]<<endl;
    //Print the map
    for(auto it:mp)
    {
        cout<<"Key: "<<it.first<<" , Value: "<<it.second<<endl;
    }
}