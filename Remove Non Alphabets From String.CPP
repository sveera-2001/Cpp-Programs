#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()                  //Remove non alpha elements from string
{	clrscr();
	char s[50];
	int n,i;
	cout<<"Enter string:";
	gets(s);
	cout<<"\nRESULT\n";
	for(i=0;s[i]!='\0';++i)
	{	if(isalpha(s[i]))
		cout<<s[i];
	}
	getch();
}
