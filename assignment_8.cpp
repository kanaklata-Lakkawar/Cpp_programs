#include <iostream>

using namespace std;
class area
{
public:
    int length;
    int breadth;
    int side;
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
       cout<<"AREA OF RECTANGLE :"<<length*breadth<<
   }
};
int main()
{
    area a(4,5);
    return 0;
}
