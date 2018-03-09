#include<iostream.h>
#include<conio.h>
void main()
{                       //Program to find area using switch case
clrscr();
float r,l,b,ba,h,aoc,aor,aot;
int n;
cout<<"\n Area Menu";
cout<<"\n 1.Area of circle";
cout<<"\n 2.Area of rectangle";
cout<<"\n 3.Area of triangle";
cout<<"\n \n Enter your choice: ";
cin>>n;
switch(n)
{
  case 1:cout<<"\n  Enter radius of circle:";
	cin>>r;
	aoc=3.14*r*r;
	cout<<"\n  Area of circle:"<<aoc;
	break;

  case 2:cout<<"\n  Enter length and breadth of rectangle:";
	cin>>l>>b;
	aor=l*b;
	cout<<"\n  Area of rectangle:"<<aor;
	break;

  case 3:cout<<"\n Enter base and height of triangle:";
	cin>>ba>>h;
	aot=0.5*ba*h;
	cout<<"\n Area of triangle:"<<aot;
	break;

  default:cout<<"\n Wrong choice";
}

getch();
}