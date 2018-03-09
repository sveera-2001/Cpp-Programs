#include<iostream.h>
#include<conio.h>
void main()       //Program to find largest and smallest element of matrix
{
	clrscr();
	int a[50][50],n,m,i,j,l,s;
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"Enter "<<n*m<<" elements:"<<endl;
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
			{
			cin>>a[i][j];
		}
	}

	l=0;s=1234;
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			if(a[i][j]>l)
				l=a[i][j];

		}
	}

	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			if(a[i][j]<s)
				s=a[i][j];

		}
	}
	cout<<"Largest element:"<<l;
	cout<<"\nSmallest element:"<<s;
	getch();
}