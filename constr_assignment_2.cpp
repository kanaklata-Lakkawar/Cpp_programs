#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area;
    Rectangle()
{   length=0;
    breadth=0;
}
   Rectangle(int l,int b)
{   length=l;
    breadth=b;
}
   Rectangle(int l)
{   length=l;
    breadth=l;
}
   void calculate()
    {
    area=length*breadth;
    }
    getData()
    {   cout<<"LENGTH :"<<length<<endl;
        cout<<"BREADTH :"<<breadth<<endl;
        cout<<"AREA :"<<length*breadth<<endl;
    }
};
int main()
{
     Rectangle r;
     Rectangle r1(5,8);
     Rectangle r2(5);   
     r.getData();
     cout<<endl;
     r1.getData();
     cout<<endl;
     r2.getData();
     cout<<endl;
    return 0;
}
