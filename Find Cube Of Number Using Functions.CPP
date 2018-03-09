#include<iostream.h>
#include<conio.h>
int cube(int a)
{       clrscr();            //Program to find the cube using ifunc
	int r;
	r=a*a*a;
	return r;
}
void main()
{
	int n,a;
	cout<<"Enter a number:";
	cin>>n;
	a=cube(n);
	cout<<"ANS:"<<a;
	getch();
}