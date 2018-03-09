#include<iostream.h>
#include<conio.h>
void main()               //Check for perfect number
{	clrscr();
	int n,r,s=0,m,i;
	cout<<"Enter a number:";
	cin>>n;
	for(i=1;i<n;++i)
	{	if(n%i==0)
		{	s+=i;
		}
	}
	if(s==n)
		cout<<"Perfect Number!";
	else
		cout<<"Not a perfect number	!";
	getch();
}