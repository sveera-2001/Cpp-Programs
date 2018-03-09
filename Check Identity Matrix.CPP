#include<iostream.h>
#include<conio.h>
void main()
{                     //Program to identify identity matrix
	clrscr();
	int a[50][50],n,m,i,j,b=0,c=0;
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"Enter "<<n*m<<" elements:"<<endl;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	if(i<j && a[i][j]==0)
			++b;
			else if(i>j &&a[i][j]==0)
			++b;
			else if(i==j &&a[i][j]==1)
			++b;
			else
			++c;
		}
	}
	if(b==n*m)
	cout<<"\nIt's an identity matrix";
	else if(c>0)
	cout<<"\nNot an identity matrix";
	getch();
}