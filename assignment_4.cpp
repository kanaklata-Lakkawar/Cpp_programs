// Cpp program to print area of two rectangles having sides (4,5) and(5,8) respectively. by creating a class named 'Rectangle' with a function  named 'Area' which returns area, length and breadth are passed as parameters to its constructor  //


#include <iostream>

using namespace std;
class Rectangle
{   public:
    int length;
    int breadth;
    int a;
    int perim;
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void area()
    {
        a=length*breadth;
        perim=2*(length+breadth);
    }
    void getData()
    {
      cout<<"Area of Rectangle: "<<a<<endl;
      cout<<"Perimeter of Rectangle :"<<perim<<endl;
    }
};
int main()
{   Rectangle r1(4,5);
    Rectangle r2(5,8);
    r1.area();
    r2.area();
    r1.getData();
    r2.getData();
return 0;
}
