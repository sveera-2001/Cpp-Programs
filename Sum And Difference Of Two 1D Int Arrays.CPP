#include<iostream.h>
#include<conio.h>
void main()
{              //Sum of two arrays
	clrscr();
	int a[50][50],b[50][50],c[50][50],d[50][50],n,m,i,j;
	cout<<"Enter the number of rows and columns in both the arrays:";
	cin>>n>>m;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cout<<"Enter element "<<i<<j<<" for array 1:";
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cout<<"Enter element "<<i<<j<<" for array 2:";
			cin>>b[i][j];
		}
	}
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	c[i][j]=a[i][j]+b[i][j];
			d[i][j]=a[i][j]-b[i][j];
		}
	}
	cout<<"\nSum"<<endl;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\nDifference"<<endl;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
	getch();
}