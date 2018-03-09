#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{	clrscr();              //Test string
	char s[50],g;
	int i,c=0;
	cout<<"Enter a string:";
	gets(s);
	cout<<"Enter a testing word:";
	cin>>g;
	if(g=='a' ||g=='i'||g=='o'||g=='u'||g=='e')
	{	for(i=0;s[i]!='\0';++i)
		{	if(s[i]==g)
				++c;
		}
		cout<<"Number of occurence of vowel words:"<<c;
	}
	else
	{	for(i=0;s[i]!='\0';++i)
		{	if(s[i]==g)
			{	cout<<"Charc:"<<s[i];
				cout<<"\nPosition:"<<i;
			}
		}
	}
	getch();
}


