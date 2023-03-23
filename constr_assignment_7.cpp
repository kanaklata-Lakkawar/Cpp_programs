/* Create a class to print an integer and a character using two functions having the same name but different sequence of the integer 
and th characher parameters.*/

#include <iostream>

using namespace std;
class printNumchar
{
public:
    int num;
    char ch;
    setData(int n,char c)
    {
        num=n;
        ch=c;
        cout<<"NUMBER :"<<num<<endl;
        cout<<"CHARACTER :"<<ch<<endl<<endl;
    }
    setData(char c,int n)
    {
        ch=c;
        num=n;
        cout<<"CHARACTER :"<<ch<<endl;
        cout<<"NUMBER :"<<num<<endl;
    }
};
int main()
{
    printNumchar p;
    int num;
    char ch;
    cout<<"Enter number :";
    cin>>num;
    cout<<"Enter character :";
    cin>>ch;
    p.setData(num,ch);
    p.setData(ch,num);


    return 0;
}
