#include<iostream.h>
#include<conio.h>
void main()
{                //Program to swap rows with columns
	clrscr();
	int a[50][50],n,m,i,j,t;
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"\nEnter "<<n*m<<" elements:"<<endl;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cin>>a[i][j];
		}
	}
	for(i=0;i<n;++i)
	{	for(j=i+1;j<m;++j)
		{	t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
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