#include<bits/stdc++.h> 

using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int maxx=max(num1,num2);
    int mini=min(num1,num2);
    int addi=num1+num2;
    int mull=num1*num2;
    cout<<maxx<<"\n";
    cout<<mini<<"\n";
    cout<<addi<<"\n";
    cout<<mull<<"\n";

}
/*
    constant complexcity O(1).
*/