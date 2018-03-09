#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	float a,b,sum,difference,quotient,product;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	sum=a+b;
	cout<<"\n Sum of the numbers: "<<sum;
	difference=a-b;
	cout<<"\n Difference between the two numbers: "<<difference;
	quotient=b/a;
	cout<<"\n Quotient of the two numbers: "<<quotient;
	product=a*b;
	cout<<"\n Product of the two numbers: "<<product;
	getch();
}