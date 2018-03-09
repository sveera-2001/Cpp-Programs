#include<iostream.h>
#include<conio.h>
void main()           //Program to print multiplication tables
{	clrscr();
	long int num,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10;
	cout<<"Enter a number to find its first 10 multiples:";
	cin>>num;
	m1=num*1;
	cout<<"\n"<<num<<"*1="<<m1;
	m2=num*2;
	cout<<"\n"<<num<<"*2="<<m2;
	m3=num*3;
	cout<<"\n"<<num<<"*3="<<m3;
	m4=num*4;
	cout<<"\n"<<num<<"*4="<<m4;
	m5=num*5;
	cout<<"\n"<<num<<"*5="<<m5;
	m6=num*6;
	cout<<"\n"<<num<<"*6="<<m6;
	m7=num*7;
	cout<<"\n"<<num<<"*7="<<m7;
	m8=num*8;
	cout<<"\n"<<num<<"*8="<<m8;
	m9=num*9;
	cout<<"\n"<<num<<"*9="<<m9;
	m10=num*10;
	cout<<"\n"<<num<<"*10="<<m10;
	getch();
}