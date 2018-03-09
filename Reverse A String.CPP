#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()            //Program to reverse string
{
	clrscr();
	char s[100];
	int i,l,p;
	cout<<"Enter the string:"<<endl;
	gets(s);
	for(i=0,l=0;s[i]!='\0';++i,++l);
	cout<<"\nReversed String:"<<endl;
	for(p=l;p>=0;--p)
	cout<<s[p];
	s[l+1]='\0';
	getch();
}