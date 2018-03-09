#include<iostream.h>
#include<conio.h>
void swap(int &x,int &y)
{	int t=0;
	t=x;
	x=y;
	y=t;
}                //Pass by refernce to swap two numbers
void main()
{	clrscr();
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"\nSWAPPED RESULT:";
	swap(a,b);
	cout<<a<<" "<<b;
	getch();
}