#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<iostream.h>
void main()
{                          //Program to count the number of vowels words in 2d char
	clrscr();
	int n,i,j,w,v;
	char s[100][100];
	cout<<"Enter the number of strings:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter string "<<i+1<<":";
		gets(s[i]);
	}
	for(i=0;i<n;++i)
	{       w=v=0;
		for(j=0;s[i][j]!='\0';++j)
		{	if(s[i][j]==' ')
			++w;
			else if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u'||s[i][j]=='A'||s[i][j]=='E'||s[i][j]=='I'||s[i][j]=='O'||s[i][j]=='U')
			++v;
		}
		cout<<"\nNumber of words in string "<<i+1<<":"<<w+1;
		cout<<"\nNumber of vowels in string "<<i+1<<":"<<v;
		cout<<"\n\n_____________________________________________";
	}
	getch();
}