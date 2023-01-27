#include<bits/stdc++.h>
using namespace std;
class Person
{
    private:
    string name;
    int age;
    int salary;
    public:
    void display()
    {
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
    void setInfo(string name, int age, int salary)
    {
        this->name=name;
        this->age=age;
        this->salary=salary;
    }
};

int main()
{
    Person p;
    p.setInfo("Al AMin",23,5000);
    p.display();
    return 0;
}