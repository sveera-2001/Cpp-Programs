#include<iostream.h>
#include<conio.h>
void con(int &x,int c)
{	if(c==1)
	x=x;
	else if(c==2)
	x=x*12;
}                             //Convert using call by refernce
void main()
{	clrscr();
	int a,d;
	cout<<"Enter distance in feet:";
	cin>>a;
	cout<<"\n\nDisplay distance in feet or inches(1/2)?:";
	cin>>d;
	con(a,d);
	cout<<"\nRESULT:\n";
	cout<<a;
	getch();

}