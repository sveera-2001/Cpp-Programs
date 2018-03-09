#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{                         //Program to reverse a 2d string using func
	clrscr();
	int n,i,j;
	char s[100][100];
	cout<<"Enter the number of strings:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter string "<<i+1<<":";
		gets(s[i]);
	}

	for(i=0;i<n;++i)
	{       cout<<"\n\nReverse of string "<<i+1<<":"<<endl;
		puts(strrev(s[i]));
	}
	getch();
}