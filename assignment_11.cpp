//  Cpp program that prints information of three empolyee by creating a class name 'Employee' //


#include <iostream>

using namespace std;
class Employee
{
    public :
    string name;
    int yr;
    int salary;
    string address;
    void setData()
    {   cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter year of joining :";
        cin>>yr;
        cout<<"Enter salary :";
        cin>>salary;
        cout<<"Enter address :";
        cin>>address;
    }
    void getData()
    {
        cout<<" "<<name<<"           "<<yr<<"         "<<salary<<"    "<<address<<endl;
    }
};
int main()
{   cout << "Hello world!" << endl;
    Employee e,e1,e2;
    e.setData();
    e1.setData();
    e2.setData();
    cout<<" Name "<<"|  Year of joining "<<"| Salary "<<"| Address "<<endl;
    e.getData();
    e1.getData();
    e2.getData();
    return 0;
}
