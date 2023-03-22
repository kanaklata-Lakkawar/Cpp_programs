#include <iostream>

using namespace std;
class AddAmount
{
public:
    int amount=50;
    AddAmount()
    {
        amount=0;
    }
    AddAmount(int amt)
    {
        amount=amt;
    }
    getData()
    {
        cout<<"FINAL AMOUNT :"<<amount<<endl;
    }
};
int main()
{
    AddAmount b;
    b.getData();
    AddAmount b1(50);
    b1.getData();
    return 0;
}
