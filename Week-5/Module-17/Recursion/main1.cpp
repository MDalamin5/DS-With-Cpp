#include<bits/stdc++.h>
using namespace std;
int fact(int n);
int main()
{
   cout<< fact(5);
}
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}