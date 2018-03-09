#include<iostream.h>
#include<conio.h>
void main()                 //Reverse the digits of number
{	clrscr();
	int n,r,v=0;
	cout<<"Enter number:";
	cin>>n;
	do
	{	r=n%10;
		v=v*10+r;
		n=n/10;
	}while(n>0);
	cout<<"Reversed number:"<<v;
	getch();
}
