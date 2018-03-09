#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();          //Arranging elements of array in ascending order
int a[100],i,n,j,t;
cout<<"Enter the number of elements:";
cin>>n;
for(i=0;i<n;++i)
{	cout<<"Enter element "<<i+1<<endl;
	cin>>a[i];
}
for(i=0;i<n;++i)
{       for(j=i+1;j<n;++j)
	{	if(a[i] > a[j])
		{	t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
cout<<"\nRESULT:\n";
for(i=0;i<n;++i)
cout<<a[i]<<" ";
getch();
}