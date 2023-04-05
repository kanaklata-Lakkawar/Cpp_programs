/* CPP program to print names of students by creating a stuent class. If no name is passed while creating an object of student  class,then the name should be 
"UNKNOWN",otherwise name  should be equal to string valuse passed ehile creating an object of student class. */


#include <iostream>

using namespace std;
class Student
{
public:
     string name;
Student()
{
   name="UNKNOWN";
}
Student(string nm)
{
   name=nm;
}
getData()
{
    cout<<"ENTER NAME :"<<name<<endl;
}
setData()
{
    cout<<"NAME :"<<name<<endl;
}
     
};
int main()
{
   Student s;
   s.setData();
   Student s1("RAM");
   s1.getData();
   s1.setData();

    return 0;
}
