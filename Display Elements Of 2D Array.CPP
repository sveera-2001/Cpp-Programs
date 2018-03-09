#include<iostream.h>
#include<conio.h>
void main()
{                  //Program to display elements of 2D array
clrscr();
int a[50][50],n,m,i,j;
cout<<"Enter the number of rows and columns:";
cin>>n>>m;
cout<<"Enter "<<n*m<<" elements:"<<endl;
for(i=0;i<n;++i)
{	for(j=0;j<m;++j)
	{	cin>>a[i][j];
	}
}
cout<<"\nRESULT:\n";
for(i=0;i<n;++i)
{	for(j=0;j<m;++j)
	{	cout<<a[i][j]<<" ";
	}
	cout<<endl;
}
getch();
}