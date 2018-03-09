#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int a[50],n,i,j,t;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter "<<n<<" elements:";
	for(i=0;i<n;++i)
	{	cin>>a[i];
	}
	if(n%2==0)
	{	for(i=0,j=i+1;i<n;i+=2,j+=2)
		{	t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	else
	{	for(i=0,j=i+1;i<n-1;i+=2,j+=2)
		{	t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	for(i=0;i<n;++i)
	{	cout<<a[i]<<" ";
	}
	getch();
}