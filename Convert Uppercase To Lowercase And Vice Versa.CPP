#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()          /*Program to convert UC to LC and vice versa using ctype
		       function*/
{
	clrscr();
	char s[100];
	int i,c=0,l=0,d=0;
	cout<<"Enter a sentence to convert into UC or LC:";
	gets(s);
	for(i=0,l=0;s[i]!='\0';++i,++l)
	{	if(isupper(s[i]) || s[i]==' ')
		{       s[i]=tolower(s[i]);
			++d;
		}
		else if(islower(s[i]) || s[i]==' ')
		{	s[i]=toupper(s[i]);
			++d;
		}
		else
		++c;
	}
	cout<<"\nProcessed String:"<<endl;
	if(d==l)
	{	for(i=0;s[i]!='\0';++i)
		cout<<s[i];
	}
	else if(c>0)
	cout<<"Enter a proper sentence";
	getch();
}

