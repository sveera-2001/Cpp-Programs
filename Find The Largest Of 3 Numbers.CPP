#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int a,b,c;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	if (a>b && a>c)
		cout<<"Largest number:"<<a;
	else if (b>a && b>c)
		cout<<"Largest number:"<<b;
	else if  (c>a && c>b)
		cout<<"Largest number:"<<c;
	else
		cout<<"All the numbers are equal";
	getch();
}
