#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream of;
    ofstream of2;
    ifstream ifs;
    of.open("1.txt");
    of2.open("2.txt");
    of<<"Md Al Amin";
    of2<<"Assalamualikum";
    int x;
    float y;
    double z;
    ifs.open("input.txt");
    ifs>>x>>y>>z;
    cout<<x<<" "<<y<<" "<<z;
    ifs.close();
    of.close();
    of2.close();
    double m=3.4474534;
    cout<<setprecision(2)<<fixed<<"\n"<<m;
}