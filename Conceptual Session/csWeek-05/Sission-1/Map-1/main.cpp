#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> mp;
    mp[1] = 4;
    mp[1] = 3;
    mp[2] = 55;
    mp[11] = 77;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}