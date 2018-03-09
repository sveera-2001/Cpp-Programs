#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int a[50][50],n,m,i,j;
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"Enter "<<n*m<<"  elements:"<<endl;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cin>>a[i][j];
		}
	}
	cout<<"\nBorderline elements:"<<endl;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	if(i==0 || j==0 || i==n-1 ||j==n-1)
			{	cout<<a[i][j]<<" ";
			}
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	getch();
}
