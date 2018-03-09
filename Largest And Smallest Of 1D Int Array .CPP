#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()                  //Largest and smallest of array
{	clrscr();
	int a[50],n,i,s,l,j;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"\nEnter elements:";
	for(i=0;i<n;++i)
	{	cin>>a[i];
	}
	s=a[0];
	l=a[0];
	for(i=1;i<n;++i)
	{      	if(a[i]>l)
			l=a[i];
		else
			s=a[i];
	}
	cout<<"Smallest:"<<s;
	cout<<"\nLargest:"<<l;
	getch();
}

