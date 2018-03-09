#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()      //Program to combine two strings using string func
{
	clrscr();
	char s[100],p[100];
	int i;
	cout<<"Enter string 1:";
	gets(s);
	cout<<"Enter string 2:";
	gets(p);
	strcat(s,p);
	cout<<"Processed string:"<<s;
	getch();
}
