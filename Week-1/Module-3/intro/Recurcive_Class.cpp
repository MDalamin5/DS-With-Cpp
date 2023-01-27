#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    person *father,*mother;

    void displayInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Fathers Name: "<<father->name<<endl;
        cout<<"Mothers Name: "<<mother->name<<endl;
    }
};


int main()
{
    person p;
    p.father=new person;
    p.mother=new person;
    p.name="Md Al Amin";
    p.father->name="Bodrul Islam";
    p.mother->name="Rupali Khatun";
    p.displayInfo();

    return 0;
}