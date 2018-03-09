#include<iostream.h>
#include<conio.h>
void main()                        //SUM OF ARRAY
{	clrscr();
	int a[100],n,i,s=0;
	float av;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements:";
	for(i=0;i<n;++i)
	{	cin>>a[i];
	}
	for(i=0;i<n;++i)
	{	s+=a[i];
	}
	av=s/2;
	cout<<"Sum of the array:"<<s;
	cout<<"\n Average of the array:"<<av;

	getch();
}