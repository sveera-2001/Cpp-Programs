#include<iostream.h>
#include<conio.h>
void main()                 //Transpose rows and columns
{       clrscr();
	int a[50][50],t,n,m,i,j;
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"Enter "<<n*m<<" elements:\n";
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cin>>a[i][j];
		}
	}
	cout<<"\n\nRESULT:\n\n";
	for(i=0;i<n;++i)
	{	for(j=i;j<m;++j)
		{	t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
}



