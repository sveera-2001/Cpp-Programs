#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int a[50],i,n;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements:";
	for(i=0;i<n;++i)
	cin>>a[i];
	cout<<"\nRESULT:\n";
	for(i=n-1;i>=0;--i)
	cout<<a[i]<<" ";
	getch();
}