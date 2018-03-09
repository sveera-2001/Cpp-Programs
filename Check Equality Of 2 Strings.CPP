#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{                     //Program to check equality of string
	clrscr();
	char s[100],p[100];
	int i,l=0,m=0,v=0,e=0;
	cout<<"Enter string1:"<<endl;
	gets(s);
	cout<<"Enter string2:"<<endl;
	gets(p);
	for(l=0,i=0;s[i]!='\0';++i,++l);
	for(m=0,i=0;p[i]!='\0';++i,++m);
	if(l==m)
	{
		for(i=0;s[i]!='\0',p[i]!='\0';++i)
		{
			if(s[i]==p[i])
			++v;
			else if(s[i]!=p[i])
			++e;
		}
	}
	else if(l!=m)
	{	cout<<"\nResult:"<<endl;
		cout<<"The strings are not equal";
	}
	if(l==v)
	{       cout<<"\nResult:"<<endl;
		cout<<"Strings are equal";
	}
	else if(e>0)
	{       cout<<"\nResult:"<<endl;
		cout<<"Strings are not equal";
	}
	getch();

}