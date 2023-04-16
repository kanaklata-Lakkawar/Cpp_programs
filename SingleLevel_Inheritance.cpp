#include <iostream>

using namespace std;
class Address
{
   public:
    int pltNum;
    string city;
    string pin;
   
    void acceptAddress()  
   {
        cout<<"Enter Plot No. :";
        cin>>pltNum;
        cout<<"Enter City :";
        cin>>city;
        cout<<"Enter pinCode :";
        cin>>pin;
    }   
   
 void getAddress()
    {
        cout<<" Plot No. :"<<pltNum<<endl;
        cout<<"City :"<<city<<endl;
        cout<<"pinCode :"<<pin<<endl;
    }

};

class Student:public Address
{
public:
    string name;
    string roll;
    int p1;
    int p2;
    int p3;
    void acceptStudentDetail()
    {
        cout<<"Enter student Name :";
        cin>>name;
        cout<<"Enter Roll No :";
        cin>>roll;
        cout<<"Enter paper I marks :";
        cin>>p1;
        cout<<"Enter paper II Marks :";
        cin>>p2;
        cout<<"Enter paper III Marks :";
        cin>>p3;
    }
    void getStudentData()
    {   cout<<"---------------------"<<endl;
        cout<<" Name :"<<name<<endl;
        cout<<"Enter Roll No :"<<roll<<endl;
        cout<<"Enter paper I marks :"<<p1<<endl;
        cout<<"Enter paper II Marks :"<<p2<<endl;
        cout<<"Enter paper III Marks :"<<p3<<endl<<endl;
    }
};
class Teacher:public Address
{
public:
    string name;
    int empID;

    void acceptTeacherDetail()
    {
        cout<<"TEACHER NAME :";
        cin>>name;
        cout<<"Employ ID :";
        cin>>empID;
    }
    void getTeacherData()
    {
        cout<<"---------------------"<<endl;
        cout<<"TEACHER NAME :"<<name<<endl;;
        cout<<"Employ ID :"<<empID<<endl<<endl;
    }
};
int main()
{
   Student s;
   s.acceptStudentDetail();
   s.acceptAddress();
   s.getStudentData();
   s.getAddress();
   Teacher t;
   t.acceptTeacherDetail();
   t.acceptAddress();
   t.getTeacherData();
    s.getAddress();

    return 0;
}
