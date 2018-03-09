#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{                            //Count number of words
	clrscr();
	char s[50][50];
	int n,i,j,c=0,l;
	cout<<"Enter the number of strings:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter string "<<i+1<<":";
		gets(s[i]);
	}
	for(i=0;i<n;++i)
	{       c=0;

		for(j=0;s[i][j]!='\0';++j)
		{	if(s[i][j]==' ')
			++c;
		}
		cout<<"\nNumber of words in string "<<i+1<<":"<<c+1;
	}
	getch();
}