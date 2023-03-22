#include <bits/stdc++.h>
using namespace std;
void foo(int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    foo(3);
}
void foo(int n)
{
    if (n>0)
    {
    cout<<n<<" ";
    foo(n - 1);
    foo(n - 1);
    }
}