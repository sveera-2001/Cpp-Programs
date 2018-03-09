#include<iostream.h>
#include<conio.h>
void main()               //Program to find the largest of the element
{
	clrscr();
	int a[50],s=9999,l=0,n,i;
	cout<<"Enter the number of elements:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter element "<<i+1<<":";
		cin>>a[i];
	}
	for(i=0;i<n;++i)
	{	if(a[i]>l)
		l=a[i];
		if(a[i]<s)
		s=a[i];
	}
	cout<<"\n\nLargest:"<<l;
	cout<<"\nSmallest:"<<s;
	getch();
}