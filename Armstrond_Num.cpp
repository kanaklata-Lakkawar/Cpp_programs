#include <iostream>

using namespace std;

int main()
{
int num;
cin>>num;


 return 0;
}
/*
//Basic Addition//
    int a,b;
    cout<<"Enter any 2 numbers\n";
    cin>>a>>b;
    int c=a+b;
    cout <<a<<" "<<b<<" "<<c<< endl;
    return 0;

    //Area and perimeter Rectangle//
    int height,width;
    cout<<"Enter height :";
    cin>> height;
    cout<<"Enter width :";
    cin>> width;
    int area=height*width;
    cout<<"Area ="<<area<<endl;
    int perim=2*(height+width);
    cout<<"Perimeter ="<<perim;

    ///Area and perimeter of Circle//
    float radius,pie=3.14;
 cout<<"Enter radius of Circle :";
 cin>>radius;
 float area=pie*radius*radius;
 cout<<"Area Of Circcle :"<<area<<endl;
 float perim=2*pie*radius;
 cout<<"Perimeter Of Circle :"<<perim;

//convert days into years weeks and day//
int totDays=1329;
 int years=totDays/365;
 cout<<"Years :"<<years<<endl;
 totDays=totDays-(365*3);
 int weeks=totDays/7;
 cout<<"Weeks :"<<weeks<<endl;
 int day=totDays-(33*7);
 cout<<"Days :"<<day<<endl;

 //Notes//

 int amt=375;
 int note,rem;
 note=amt/100;//3
 rem=amt%100;//75
 cout<<note<<" notes of 100"<<endl;
 note=rem/50;//1
 cout<<note<<" notes of 50"<<endl;
 note=rem%50;//25
 note=note/20;//1
 cout<<note<<" notes of 20"<<endl;
 note=note%20;//5
note=note/5;
cout<<note<<" notes of 5"<<endl;

//Sec into hrs minutes and seconds//
int totsec=25300;
int hr=totsec/3600;
int minute=(totsec-3600*hr)/60;
int sec= (totsec-3600*hr)-minute*60;
cout<<hr<<" "<<minute<<" "<<sec<<endl;


//Swap using third value//

int a;
int b;
cout<<"Enter any two value\n";
cin>>a>>b;
int temp=a;
a=b;
b=temp;
cout<<a<<" "<<b;

//Swap using only two variables//
int a;
int b;
cout<<"Enter any two value\n";
cin>>a>>b;
a=a-b;
b=a+b;
a=b-a;
cout<<a<<" "<<b;

//Two numbers are equal or not//
int num1, num2;
cout<<"Enter any two numbers :";
cin>>num1>>num2;
if(num1==num2)
    cout<<"Numbers are equal";
else cout<<"Numbers are Different";

//Even odd//
int num;
cout<<"Enter any number :";
cin>>num;
if(num%2==0)
    cout<<"Number is even";
else
    cout<<"Number is odd";

    //Positive and negative Number//
    int num;
cout<<"Enter any number :";
cin>>num;
if(num>0)
    cout<<"Number is positive";
else
    cout<<"Number is negative";

    //Leap Year//

    int year;
cout<<"Enter year :";
cin>>year;
if(year%4==0 && year%100==0 ||year%400!=0)
cout<<"Leap Year";
else
    cout<<"This is not a leap year";

    //voting age//
    int age;
cout<<"Enter age :";
cin>>age;
if(age<18)
    cout<<"The candidate is not eligible for voting";
if(age>18)
    cout<<"The candidate is eligible for casting his/ her vote";

    //Ladder//
    int m,n;
cout<<"Enter value of m :";
cin>>m;
if(m>0)



    cout<<"n=1";


else if(m=0)


    cout<<"n=0";


else if(m<0)


    cout<<"n=-1";

    //Reverse Number//
int n;
int rev=0;
cout<<"Enter any number";
cin>>n;
while(n!=0)
      {
           rev=n%10;
            cout<<rev;
            n=n/10;

      }

      //Admission Eligibility//
      int math,phy,chem;
cout<<"Enter Mathematics Marks :";
cin>>math;
cout<<"Enter Physicscs Marks :";
cin>>phy;
cout<<"Enter Chemistry Marks :";
cin>>chem;
int tot=math+phy+chem;
if(tot>=180)
{
    if(math>=65 && phy>=55 && math>=72)
        cout<<"The Candidate is eligible for admission.";
}
else if(math>=65 && tot>=140)
    cout<<"The candidate is eligible foe admission";
else
    cout<<"The candidate is not eligible for admission";

    //Chara is Alphabet ,Digit or Symbol//
    char chara;
 cout<<"Enter any Key :";
 cin>>chara;
 if(chara>='A' && chara<='Z')
    cout<<"Character is Alphabet";

 else if(chara>='a' && chara<='z')
     cout<<"Character is Alphabet";

 else if(chara>='0' && chara<='9')
    cout<<"Character is Digit";

 else
    cout<<"Character is Symbol";



    //Sum of first 10 natural Numbers//
    int sum;

for(int i=1;i<11;i++)
{
    cout<<i<<endl;
    sum+=i;
}
cout<<"Sum of First 10 natural numbers is :"<<sum;

//Cube//
int num;
cout<<"Enter number :";
cin>>num;
for (int i=1;i<num;i++)
{
    cout<<"Number is : "<<i<<" and cube of "<<i<<" is :"<<i*i*i<<endl;
}

//Armstrong Number//
int num,temp=0,sum=0;
cout<<"enter any 3 digit Number :";
cin>>num;
temp=num;
while(temp!=0)
{

   int rem=temp%10;
   sum+=rem*rem*rem;//25
   temp/=10;//

}
if(num==sum)
cout<<"Number is Armstrong";
else
    cout<<"Number is not Armstrong";;*/
