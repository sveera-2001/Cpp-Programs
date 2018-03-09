#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();            //Sum Of Digits
	int n,r,s=0;
	cout<<"Enter three digit number:";
	cin>>n;
	do
	{	r=n%10;
		s+=r;
		n=n/10;
	}while(n>0);
	cout<<"Sum of digits:"<<s;
	getch();
}