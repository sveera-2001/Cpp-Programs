#include<iostream.h>
#include<conio.h>
void main()
{                            //Program to remove duplicate elements
	clrscr();
	int a[50],n,i,j,rf;
	cout<<"How many numbers?:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter element "<<i+1<<":";
		cin>>a[i];
	}
	for(i=0;i<=n;++i)
	{	for(j=i+1;j<n;++j)
		{	if(a[i]==a[j])
			{       a[j]=0;

			}
		}
	}
	cout<<"\nRESULT\n";
	for(i=0;i<n;++i)
	{	if(a[i]!=0)
			cout<<a[i]<<"\n";
	}
	getch();
}
