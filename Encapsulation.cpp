#include <iostream>

using namespace std;
class Bank
{
    int accno;
    string name;
    string add;
    int amt;

public:
    void setAccno(int ac)
    {
        accno=ac;
    }
    void setname(string nm)
    {
        name=nm;
    }
    void setadd(string ad)
    {
        add=ad;
    }
    void setAmt(int am)
    {
        amt=am;
    }
     int getAccno()
     {
         return accno;
     }
     string getname()
     {
         return name;
     }
     string getAdd()
     {
         return add;
     }
     int getAmt()
     {
       return amt;
     }
};

int main()
{
   Bank b1,b2;
   b1.setAccno(111);
   b1.setname("Ram");
   b1.setadd("nagpur");
   b1.setAmt(200);

  cout<<"USER 1"<<endl;
   b1.getAccno();
   b1.getname();
   b1.getAdd();
   b1.getAmt();
    
   cout<<"Acc no :"<<b1.getAccno()<<endl;
    cout<<"Name :"<<b1.getname()<<endl;
    cout<<"Add :"<<b1.getAdd()<<endl;
   cout<<"Amt  :"<<b1.getAmt()<<endl;

   b2.setAccno(222);
   b2.setname("sham");
   b2.setadd("jaipur");
   b2.setAmt(300);

   cout<<"USER 1"<<endl;
   b2.getAccno();
   b2.getname();
   b2.getAdd();
   b2.getAmt();

   cout<<"Acc no :"<<b2.getAccno()<<endl;
   cout<<"NAme :"<<b2.getname()<<endl;
   cout<<"Add :"<<b2.getAdd()<<endl;
   cout<<"Amt  :"<<b2.getAmt()<<endl;
   return 0;
}
