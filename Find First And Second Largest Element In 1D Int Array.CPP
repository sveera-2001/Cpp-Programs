#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int n,a[10],i,fl,sl,fs,ss;
	cout<<"Enter the number of elements in array:";
	cin>>n;
	cout<<"Enter "<<n<<" elements:";
	for(i=0;i<n;++i)
	{	cin>>a[i];
	}
	if(a[0]<a[1])
	{	fl=a[1];
		sl=a[0];
	}
	else
	{	fl=a[0];
		sl=a[1];
	}
	if(a[0]>a[1])
	{	fs=a[1];
		ss=a[0];
	}
	else
	{	fs=a[0];
		ss=a[1];
	}
	for(i=2;i<n;++i)
	{	if(a[i]>fl)
		{	sl=fl;
			fl=a[i];
		}
		else if(a[i]>sl && sl!=fl)
		{	sl=a[i];
		}
	}
	for(i=2;i<n;++i)
	{	if(a[i]<fs)
		{	ss=fs;
			fs=a[i];
		}
		else if(a[i]<ss && ss!=fs)
		{	ss=a[i];
		}
	}
	cout<<"First largest:"<<fl;
	cout<<"\nSecond largest:"<<sl;
	cout<<"\nFirst smallest:"<<fs;
	cout<<"\nSecond smallest:"<<ss;
	getch();
}