#include <iostream>

using namespace std;
class Address
{
public:
    int pltno;
    string line1;
    string line2;
    string city;
    string state;
    int pin;
    Address()
    {

    }
    Address(int plt,string l1,string l2,string cty,string st,int p)
    {
       pltno=plt;
       line1=l1;
       line2=l2;
       city=cty;
       state=st;
       pin=p;
    }
    getData()
    {
        cout<<"Plot no. =>"<<pltno<<endl;
        cout<<"Line 1 =>"<<line1<<endl;
        cout<<"Line 2 =>"<<line2<<endl;
        cout<<"City =>"<<city<<endl;
        cout<<"State =>"<<state<<endl;
        cout<<"pinCode =>"<<pin<<endl<<endl;
    }
};
class Student
{
public:
    int roll;
    string name;
    Address add;
    Student()
    {

    }
    Student(int r,string nm,Address a)
    {
        roll=r;
        name=nm;
        add=a;
    }
    getData()
    {
        cout<<"Name =>"<<name<<endl;
        cout<<"Roll No =>"<<roll<<endl<<endl;
        add.getData();
    }

};
class Teacher
{
public:
    int employeeID;
    string name;
    Address add;
    Teacher(int id,string nm,Address a)
    {
        employeeID=id;
        name=nm;
        add=a;
    }
    getData()
    {
        cout<<"Employee Name =>"<<employeeID<<endl;
        cout<<"Enter Name =>"<<name<<endl<<endl;
        add.getData();
    }
};
int main()
{
    Address ad(101,"Frndz Colony","katol road","Nagpur","MH",440013);
    ad.getData();

   Student s(2,"RAM",ad);
   s.getData();

   Teacher t(1198,"SHAM",ad);
   t.getData();

    return 0;
}
//HAS A RELATION USING SETDATA//
/*class Address
{
public:
    int pltno;
    string line1;
    string line2;
    string city;
    string state;
    int pin;
    setData()
    {
        cout<<"plot no. :";
        cin>>pltno;
        cout<<"Line 1 :";
        cin>>line1;
        cout<<"Line 2 :";
        cin>>line2;
        cout<<"City :";
        cin>>city;
        cout<<"State :";
        cin>>state;
        cout<<"Enter pin :";
        cin>>pin;
    }
    getData()
    {
        cout<<"Plot no. =>"<<pltno<<endl;
        cout<<"Line 1 =>"<<line1<<endl;
        cout<<"Line 2 =>"<<line2<<endl;
        cout<<"City =>"<<city<<endl;
        cout<<"State =>"<<state<<endl;
        cout<<"pinCode =>"<<pin<<endl<<endl;
    }
};
class Student
{
public:
    int roll;
    string name;
    Address add;
    setData(Address a)
    {
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter roll :";
        cin>>roll;
        add=a;
    }
    getData()
    {
        cout<<"Name =>"<<name<<endl;
        cout<<"Roll No =>"<<roll<<endl<<endl;
        add.getData();
    }

};
class Teacher
{
public:
    int employeeID;
    string name;
    Address add;
    setData(Address a)
    {
        cout<<"Enter name :";
        cin>>name;
        cout<<"Employee ID :";
        cin>>employeeID;
        add=a;
    }
    getData()
    {
        cout<<"Employee Name =>"<<employeeID<<endl;
        cout<<"Enter Name =>"<<name<<endl<<endl;
    }
};
int main()
{
    Address ad;
    ad.setData();
    ad.getData();

   Student s;
   s.setData(ad);
   s.getData();

   Teacher t;
   t.setData(ad);
   t.getData();

    return 0;
}*/
