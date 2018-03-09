#include<iostream.h>
#include<conio.h>
void main()              //Perform User Specified Function In 1D Array
{	clrscr();
	int a[50][50],n,m,i,j,c,sum=0,sr=0,sc=0;
	cout<<"Enter the number of rows and columns";
	cin>>n>>m;
	for(i=0;i<n;++i)
	{	for(j=0;j<m;++j)
		{	cout<<"Enter element "<<i<<j<<":";
			cin>>a[i][j];
		}
	}
	cout<<"*******MENU******"<<endl;
	cout<<"1.Display elements of the matrix"<<endl;
	cout<<"2.Find sum of all elements of the matrix"<<endl;
	cout<<"3.Display sum of the row in a matrix"<<endl;
	cout<<"4.Display sum of the column in a matrix"<<endl;
	cout<<"\nEnter your option:";
	cin>>c;
	if(c==1)
	{       cout<<"\nRESULT:\n";
		for(i=0;i<n;++i)
		{	for(j=0;j<m;++j)
			{	cout<<a[i][j]<<"  ";
			}
			cout<<endl;
		}
	}
	else if(c==2)
	{	for(i=0;i<n;++i)
		{	for(j=0;j<m;++j)
			{	sum+=a[i][j];
			}
		}
		cout<<"Sum of all elements:"<<sum;
	}
	else if(c==3)
	{	for(i=0;i<n;++i)
		{	sr=0;
			for(j=0;j<m;++j)
			{	sr+=a[i][j];
			}
			cout<<"Sum of row "<<i<<":"<<sr<<endl;

		}
	}
	else if(c==4)
	{	for(i=0;i<n;++i)
		{	sc=0;
			for(j=0;j<m;++j)
			{	sc+=a[j][i];
			}
			cout<<"Sum of column"<<i<<":"<<sc<<endl;
		}
	}
	getch();
}
