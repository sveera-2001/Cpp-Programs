#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()           //Program to check for a given Word in 2D char Array
{	clrscr();
	char a[50][50],b[50];
	int n,e=0,i;
	cout<<"How many strings?:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter string "<<i+1<<":";
		gets(a[i]);
	}
	cout<<"\n\nEnter the another string:";
	gets(b);
	for(i=0;i<n;++i)
	{	if(strcmpi(a[i],b)==0)
			++e;
	}
	cout<<"\n\nNo of times second string was found in first string:"<<e;
	getch();
}