#include<iostream.h>
#include<conio.h>
void main()           //Program to insert an element in 1D array
{
	clrscr();
	int a[50],n,i,x,c;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements:";
	for(i=0;i<n;++i)
	{	cin>>a[i];
	}
	cout<<"Enter the extra elemment:";
	cin>>x;
	a[n]=x;
	cout<<"\nArray after inserting:";
	for(i=0;i<n+1;++i)
	{	cout<<a[i]<<" ";
	}
	getch();
}