#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int d;
	cout<<"Enter a digit from 1-7:";
	cin>>d;
	switch(d)
	{
		case 1:cout<<"\n Monday";break;
		case 2:cout<<"\n Tuesday";break;
		case 3:cout<<"\n Wednesday";break;
		case 4:cout<<"\n Thursday";break;
		case 5:cout<<"\n Friday";break;
		case 6:cout<<"\n Saturday";break;
		case 7:cout<<"\n Sunday";break;
		default:cout<<"\n Wrong Number";break;
	}
	getch();
}
