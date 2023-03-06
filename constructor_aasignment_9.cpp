/*



*/


#include <iostream>

using namespace std;
class Student
{
public:
    string name;
    int age;
    string add;
    Student()
    {
        name="unknown";
        age=0;
        add="Not available";
    }
    setInfo(string nm,int ag)
    {
     name=nm;
     age=ag;
    }
    setInfo(string nm,int ag,string ad)
    {
     name=nm;
     age=ag;
     add=ad;
    }
    getInfo()
    {
        cout<<endl;
        cout<<"NAME :"<<name<<endl;
        cout<<"AGE :"<<age<<endl;
        cout<<"Address :"<<add<<endl;
    }
};
int main()
{
    string name;
    int age;
    string add;
    Student s,s1;
    for(int i=1;i<11;i++)
    {
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter age :";
    cin>>age;
    cout<<"Enter address :";
    cin>>add;
    s.setInfo(name,age);
    s.getInfo();
    s1.setInfo( name,age,add);
    s1.getInfo();
    }


    return 0;
}
