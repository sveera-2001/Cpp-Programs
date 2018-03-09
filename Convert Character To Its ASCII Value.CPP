#include<iostream.h>
#include<conio.h>
int a(char x)
{	int c;        //Program to find the ASCII value
	c=x;
	return c;
}
void main()
{	clrscr();
	int d=0;
	char r;
	cout<<"Enter a character:";
	cin>>r;
	d=a(r);
	cout<<"ASCII Value:"<<d;
	getch();
}