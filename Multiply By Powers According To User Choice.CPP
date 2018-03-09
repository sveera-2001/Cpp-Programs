#include<iostream.h>
#include<conio.h>
int cube(int x)
{	int c;
	c=x*x*x;
	return c;
}
int square(int x)
{	int c;
	c=x*x;
	return c;
}
int quad(int x)
{	int c;
	c=x*x*x*x;         //Program to multiply by powers using ifunc
	return c;
}
int panch(int x)
{	int c;
	c=x*x*x*x*x;
	return c;
}
void main()
{
	clrscr();
	int a,b,d;
	cout<<"\nEnter a number:";
	cin>>a;
	cout<<"To the power of?:";
	cin>>b;
	switch(b)
	{	case 1:	cout<<"\nRESULT"<<endl;
			cout<<a;break;
		case 2:cout<<"\nRESULT"<<endl;
			 d=square(a);
			 cout<<d;break;
		case 3:cout<<"\nRESULT"<<endl;
			 d=cube(a);
			 cout<<d;break;
		case 4:cout<<"\nRESULT"<<endl;
			 d=quad(a);
			 cout<<d;break;
		case 5:cout<<"\nRESULT"<<endl;
			 d=panch(a);
			 cout<<d;break;
	}
	getch();
}