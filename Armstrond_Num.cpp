 // Cpp program to find out armstrong number//

#include <iostream>

using namespace std;

int main()
{
int num,temp=0,sum=0;
cout<<"enter any 3 digit Number :";
cin>>num;
temp=num;
while(temp!=0)
{
   int rem=temp%10;
   sum+=rem*rem*rem;//25
   temp/=10;hh
}
if(num==sum)
cout<<"Number is Armstrong";
else
    cout<<"Number is not Armstrong";
 return 0;
}

