
#include<iostream.h>
#include<conio.h>
void main()	//Program to display middle row and column's elements
{	clrscr();
	int a[50][50],n,m,i,j;
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"\nEnter "<<n*m<<" elements:"<<endl;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cin>>a[i][j];
		}
	}
	if(n%2!=0 && m%2!=0)
	{	i=n/2;
		cout<<"Middle row elements:";
		for(j=0;j<m;++j)
		{	cout<<a[i][j]<<" ";
		}
		j=n/2;
		cout<<"\nMiddle column elements:";
		for(i=0;i<n;++i)
		{ 	cout<<a[i][j]<<" ";
		}
	}
	else if(n%2==0 &&m%2==0)
	{	i=n/2;
		cout<<"Middle row elements:";
		for(j=0;j<m;++j)
		{	cout<<a[i][j]<<" ";
		}
		j=n/2;
		cout<<"\nMiddle column elements:";
		for(i=0;i<n;++i)
		{ 	cout<<a[i][j]<<" ";
		}
	}
	getch();
}
