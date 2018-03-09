#include<iostream.h>
#include<conio.h>
void main()                            //Zero specified digits and sort
{	clrscr();
	int a[50],n,g,i;
	cout<<"Enter the number of elements in array:";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements:";
	for(i=0;i<n;++i)
	{	cin>>a[i];
	}
	cout<<"\nEnter a testing number:";
	cin>>g;
	for(i=0;i<n;++i)
	{	if(a[i]==g)
			a[i]=0;
	}
	for(i=0;i<n;++i)
	{	if(a[i]!=0)
			cout<<a[i]<<" ";
	}
	for(i=0;i<n;++i)
	{	if(a[i]==0)
			cout<<a[i]<<" ";
	}
	getch();
}