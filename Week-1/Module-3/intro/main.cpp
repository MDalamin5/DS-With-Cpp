#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
  string name;
  int stu_id;
  int age;
  string father_name;
  string mother_name;  

  void display()
  {
    cout<<name<<" "<<stu_id<<" "<<age<<" "<<father_name<<" "<<mother_name<<endl;
  }
};

class Rectangle{
    public:
    int width;
    int height;
    Student s;

    int area()
    {
        return width*height;
    }
    int premeter()
    {
        return 2*(width+height);
    }
};

int main()
{
    Rectangle r;
    r.height=3;
    r.width=4;
    r.s.name="alamin";
    r.s.display();
    cout<<r.area()<<endl;
    cout<<r.premeter()<<endl;
    /*
    Student s;
    s.name="AL amin";
    s.age=23;
    s.stu_id=1811904;
    s.father_name="Bodrul islam";
    s.mother_name="Rupali Khatun";
    s.display();

    Student s2;
    s2.name="AL amin Khan";
    s2.age=27;
    s2.stu_id=1811904;
    s2.father_name="Bodrul islam";
    s2.mother_name="Rupali ";
    s2.display();
    */
}