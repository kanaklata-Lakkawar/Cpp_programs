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
