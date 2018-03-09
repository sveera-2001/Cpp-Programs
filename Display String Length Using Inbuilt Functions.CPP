#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{                       //Program to display string length using string func
	clrscr();
	char s[100];
	int i;
	cout<<"Enter a string to display it's length:";
	gets(s);
	cout<<"Length of the string is:"<<strlen(s);
	getch();
}