#include<iostream.h>
#include<conio.h>
void reverse(int a)
{	int r,s;               //Program to reverse n numbers using ifunc
	do
	{	r=a%10;
		s=0+r;
		a=a/10;
		cout<<s;
	}while(a>0);
}
void main()
{	clrscr();
	int a[50],n,i;
	cout<<"How many numbers do you want to reverse?:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter number "<<i+1<<":";
		cin>>a[i];
	}
	cout<<"\n";
	for(i=0;i<n;++i)
	{	cout<<"Reverse of number"<<i+1<<":";reverse(a[i]);
		cout<<"\n";
	}
	getch();
}