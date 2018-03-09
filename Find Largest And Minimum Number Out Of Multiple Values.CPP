#include<iostream.h>
#include<conio.h>
void main()
{                    /*Program to find max and min value of multiple numbers*/
	clrscr();
	int n,ma=0,mi=6574893;
	char c;
	do
	{	cout<<"Enter a number";
		cin>>n;
		if(n>ma)
			ma=n;
		if(n<mi)
			mi=n;
		cout<<"Do you want to continue?:(Y/N)";
		cin>>c;
	}while(c=='y'||c=='Y');
	cout<<"MAX:"<<ma<<endl;
	cout<<"MIN:"<<mi<<endl;
	getch();
}