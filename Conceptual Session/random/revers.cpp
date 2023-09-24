#include<bits/stdc++.h>
using namespace std;
int main()
{
    //revers a number
    int input;
    cout<<"Enter Your number: ";
    cin>>input;
    int newNum = 0, sum = 0 ;
    while(input!=0)
    {
        int rem = input%10;
        newNum = newNum*10 + rem;
        input = input/ 10;
    }
    cout<<newNum;
}