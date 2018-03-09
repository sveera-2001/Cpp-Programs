#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()             //Program to check the element in 2d char array
{
	clrscr();
	int n,i,j,uc,lc,sp,l,d;
	char s[100][100];
	cout<<"Enter the number of strings:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter string "<<i+1<<":";
		gets(s[i]);
	}
	for(i=0;i<n;++i)
	{       uc=lc=sp=l=d=0;
		l=strlen(s[i]);
		for(j=0;s[i][j]!='\0';++j)
		{	if(isupper(s[i][j]))
			uc++;
			else if(islower(s[i][j]))
			lc++;
			else if(isdigit(s[i][j]))
			d++;
			else
			sp++;

		}

		cout<<"\n\nNumber of upper case characters in string "<<i+1<<":"<<uc;
		cout<<"\n\nNumber of lower case characters in string "<<i+1<<":"<<lc;
		cout<<"\n\nNumber of special characters in string "<<i+1<<":"<<sp;
		cout<<"\n\nNumber of digits in string "<<i+1<<":"<<d;
		cout<<"\n\nLength of string "<<i+1<<":"<<l;
		cout<<"\n\n__________________________________________________________";
	}
	getch();
}