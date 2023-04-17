
/* create a class to print the area of a square and a rectangle.The class has two functions with the same name but different numbers of parameters
The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing 
the area of square has one parameter which is the side of square*/

#include <iostream>

using namespace std;
class area
{

public:
    int length;
    int breadth;
    int side;
    area()
    {

    }
   area(int l,int b)
   {
     length=l;
     breadth=b;
   }
   area(int s)
   {
       side=s;
   }
   void getData()
   {
       cout<<"AREA OF RECTANGLE :"<<length*breadth<<endl;
   }
};
int main()
{
    area a,a1;
    a.getData();
    a1.getData();
    return 0;
}
