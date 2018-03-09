#include<iostream.h>
#include<conio.h>
void main()                //Program to generate prime numbers upto a digit
{	clrscr();
	int n,i,j,c=0;
	cout<<"Prime numbers less than?:";
	cin>>n;
	for(i=2;i<n;++i)
	{	for(j=1;j<=i/2;++j)
		{	if(i%j==0)
			{	++c;
			}
		}
		if(c<2)
		{	cout<<i<<" ";

		}
		c=0;
	}
	getch();
}