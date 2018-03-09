#include<iostream.h>
#include<conio.h>
void main()            //Find armstrong number
{	clrscr();
	int n,m,r,s=0;
	cout<<"Enter a number:";
	cin>>n;
	m=n;
	while(n!=0)
	{	r=n%10;
		s+=r*r*r;
		n=n/10;
	}
	if(s==m)
		cout<<"It's an Armstrong Number";
	else
		cout<<"Not an Armstrong Number";
	getch();
}