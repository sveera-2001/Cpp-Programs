#include<iostream.h>
#include<conio.h>
void main()            //Sum Of Odd and Even Elements
{
	int a[50],i,s=0,r=0,n;
	cout<<"Enter the number of elements:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter element "<<i+1<<":";
		cin>>a[i];
	}
	for(i=0;i<n;++i)
	{	if(a[i]%2==0)
		s+=a[i];
		else if(a[i]%2!=0)
		r+=a[i];
	}
	cout<<"\nSum of even elements:"<<s;
	cout<<"\nSum of odd elements:"<<r;
	getch();
}
