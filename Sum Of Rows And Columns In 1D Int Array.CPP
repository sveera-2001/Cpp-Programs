#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int a[50][50],n,m,i,j,sr,sc;
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"Enter "<<n*m<<" elements:"<<endl;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cin>>a[i][j];
		}
	}                            //Sum of rows and columns
	for(i=0;i<n;++i)
	{       sr=sc=0;
		for(j=0;j<m;++j)
		{	sr+=a[i][j];
			sc+=a[j][i];
		}
		cout<<"\nSum of row "<<i<<":"<<sr<<endl;
		cout<<"Sum of column "<<j<<":"<<sc<<endl;
	}
	getch();
}