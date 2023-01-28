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
};

bool comp(Sstudent a, Sstudent b)
    {
        //wher a is less than b
        return a.age<b.age;
    }
int main()
{
    vector<Sstudent>s;
    //s.resize(10);
    for(int i=0;i<10;i++)
    {
        s.push_back(Sstudent("Alamin",20-i,"Badrul islam","Rupali Khatun"));
    }
    sort(s.begin(),s.end(),comp);
   // sort(s.begin(),s.end());
    for(int i=0;i<10;i++)
    {
        s[i].displayInfo();
    }
    
}