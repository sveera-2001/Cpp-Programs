#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
void main()
{
	clrscr();
	char s[100];
	int i;
	cout<<"Enter a string:";
	gets(s);
	for(i=0;s[i]!='\0';++i)
	{	if(isupper(s[i]))
			s[i]=tolower(s[i]);
		else if(islower(s[i]))
			s[i]=toupper(s[i]);
	}
	cout<<"\nRESULT\n\n";
	for(i=0;s[i]!='\0';++i)
	{	cout<<s[i];
	}
	getch();
}