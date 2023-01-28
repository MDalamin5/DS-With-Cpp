#include<bits/stdc++.h>
using namespace std;
class Sstudent
{
    public:
    string name;
    int age;
    string fatrher_name;
    string mother_name;

    Sstudent(string name,int age,string fatrher_name,string mother_name)
    {
        this->name=name;
        this->age=age;
        this->fatrher_name=fatrher_name;
        this->mother_name=mother_name;
    }
    //constrctor overloading
    Sstudent(string name, int age,string fatrher_name)
    {
        this->name=name;
        this->age=age;
        this->fatrher_name=fatrher_name;
    }
    Sstudent(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    Sstudent()
    {

    }
    void displayInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Fathers Name: "<<fatrher_name<<endl;
        cout<<"Mother name: "<<mother_name<<endl<<endl;
    }
    /*
    ~Sstudent()
    {
        cout<<"Called"<<endl;
        displayInfo();
    }
    */
};

int main()
{
    Sstudent s[10];
    for(int i=0;i<10;i++)
    {
        s[i]=Sstudent("Alamin",i,"Badrul islam","Rupali Khatun");
    }
    for(int i=0;i<10;i++)
    {
        s[i].displayInfo();
    }
    /*
    Sstudent s("Al Amin",23,"Md Badrul Islam","Rupali kahatun");
    s.displayInfo();
    Sstudent s2("Al Amin",25,"Md Badrul Islam");
    s2.displayInfo();
    Sstudent s3;
    s3.displayInfo();
    //Dynamic object in c++
    Sstudent *s4 = new Sstudent("Al Amin",25);
    s4->displayInfo();
    */
}