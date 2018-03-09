#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()            //Program to combine two strings
{
	clrscr();
	char s[100],p[100];
	cout<<"Enter string 1:"<<endl;
	gets(s);
	cout<<"Entert string 2:"<<endl;
	gets(p);
	cout<<"\nCombined String:"<<endl;
	cout<<s<<" "<<p;
	getch();
}