#include<iostream.h>
#include<conio.h>
int main()                 //Program to convert a given value 310717
{
clrscr();
float cm,foot,inches;
cout<<"Enter your height in centimeters";
cin>>cm;
inches=cm/2.54;
cout<<"\n Your height in inches is:"<<inches;
foot=inches/12;
cout<<"\n Your height in feet is:"<<foot;
getch();
return 0;
}