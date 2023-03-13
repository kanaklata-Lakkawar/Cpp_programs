#include <iostream>

using namespace std;
class Programming
{
public:
    string var;
Programming()
{
    cout<<"I LOVE PROGRAMMING LANGUAGES"<<endl;
}
Programming(string v)
{
    var=v;
}
getData()
{
    cout<<"I Love "<<var<<endl;
}
};hjk
int main()
{
    Programming p;
    Programming p1("Asterisk");
    p1.getData();
    return 0;
}
