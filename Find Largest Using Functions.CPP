#include<iostream.h>
#include<conio.h>
int large(int x,int y)
{	if(x>y)
		return x;       //Program to find the largest number using Ifunc
	else if(x<y)
		return y;
	else
		cout<<"\nEQUAL!";
}
void main()
{	clrscr();
	int a,b,c=0;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	c=large(a,b);
	cout<<"Largest number is:"<<c;
	getch();
}
