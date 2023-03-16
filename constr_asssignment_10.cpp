#include <iostream>

using namespace std;
class Degree
{
   public:
       void getDegree()
    {
        cout<<"I got degree"<<endl;
    }
};
class UnderGraduate:public Degree
{
    public:
    void getDegree()
    {
        cout<<"I am Undergraduate"<<endl;
    }
};
class PostGraduate:public Degree
{
    public:
     void getDegree()
    {
        cout<<"I am Postgraduate"<<endl;
    }
};
int main()
{
    Degree d;
    d.getDegree();
    UnderGraduate u;
    u.getDegree();
    PostGraduate p;
    p.getDegree();

    return 0;
}
