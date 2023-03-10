#include <iostream>

using namespace std;
class Bank
{
 int accno;
 string username;
 string pass;
 string name;
 int amt;
 int profit;
 int loss;

public:
    void clerkSetData()
    {
        cout<<"Enter account no. :";
        cin>>accno;
        cout<<"Enter username :";
        cin>>username;
        cout<<"Enter password :";
        cin>>pass;
        if(login(username,pass))
        cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter amount :";
        cin>>amt;
    }
    void clerkGetData()
    {
        cout<<"Account no :"<<accno<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Amount :"<<amt<<endl;
    }
private:
    int login(string un,string psw)
    {
     if(un==username && psw==pass)
      return 1;
     else
      return 0;
    }
    public:
   void managerSetData()
    {
        cout<<"Enter amount :";
        cin>>amt;
        cout<<"Enter profit :";
        cin>>profit;
        cout<<"Enter loss :";
        cin>>loss;
    }
    void managerGetData()
    {
        cout<<" account no. :"<<accno<<endl;
        cout<<" username :"<<username<<endl;
        cout<<" password :"<<pass<<endl;
        cout<<" amount :"<<amt<<endl;
        cout<<" profit :"<<profit<<endl;
        cout<<" loss :"<<loss<<endl;
    }
};
int main()
{
    Bank c;
    cout<<":: Clerk ::"<<endl;
    c.clerkSetData();
    c.clerkGetData();
    Bank m;
    m=c;//cpy constructor
    cout<<":: Manager ::"<<endl;
    m.managerSetData();
    m.managerGetData();
    return 0;
}
