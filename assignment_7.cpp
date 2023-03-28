
// ADD TWO DISTANCES IN INCH-FEET BY CREATING A CLASS NAMED '' ADD DISTANCE  //

#include <iostream>

using namespace std;
class Adddistance
{
  public:
  int inch1;
  int feet1;
  int inch2;
  int feet2;
  int feets;
  int inches;
 void setData()
    {
        cout<<"Enter feets :";
        cin>>feet1;
        cout<<"Enter inches :";
        cin>>inch1;
        cout<<"Enter feets :";
        cin>>feet2;
        cout<<"Enter inches :";
        cin>>inch2;

    }
    void getData()
    {
        inches=inch1+inch2;
        feets=feet1+feet2;
        if(inches>=12)
            inches/=12;
        cout<<"Distance : "<<feets<<" ft "<<inches<<" in";
    }
    };
int main()
{
   Adddistance d;
   d.setData();
   d.getData();

    return 0;
}
