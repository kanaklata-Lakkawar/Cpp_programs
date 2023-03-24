
/*   */

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
