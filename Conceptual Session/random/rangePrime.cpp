#include<bits/stdc++.h>
using namespace std;
void rangePrime(int , int);
int main()
{
    int sNum, eNum;
    cout<<"Enter Start Number and End Number: ";
    cin>>sNum>>eNum;
    rangePrime(sNum, eNum);

}
void rangePrime(int n1, int n2)
{
    int prime[100];
    int flag = 0;
    for(int i = n1; i<=n2; i++)
    {
        for (int j = 2; j <= i/2; j++)
        {
            if(i%j==0){
                flag = 1;
            }
        }
        if(flag == 0)
        {
            cout<<i<<" ";
        }
        flag = 0;
    }
}