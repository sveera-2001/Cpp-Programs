#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()                  //Test for letters other than given letter
{	clrscr();
	char a[25],g;
	int i,c=0;
	cout<<"Enter a sentence:";
	gets(a);
	cout<<"\nEnter a testing word:";
	cin>>g;
	for(i=0;a[i]!='\0';++i)
	{	if(a[i]!=g &&a[i]!=' ')
		++c;
	}
	cout<<"\nNumber of letters other than given letter:"<<c;
	getch();
}