#include<bits/stdc++.h>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
};
class user: Person
{
    private:
    string Degenation;
    public:
    void setInfo(string name,int age,string Degenation)
    {
        this->name=name;
        this->age=age;
        this->Degenation=Degenation;
    }
    void displayInfo()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<Degenation<<endl;
    }
};
int main()
{
    user alamin;
    alamin.setInfo("Al Amin",23,"EEEe");
    alamin.displayInfo();
}