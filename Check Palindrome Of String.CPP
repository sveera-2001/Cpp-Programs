#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()           //Program to check palindrome of string
{
	clrscr();
	char s[100];
	int i,l=0,j,v=0,e=0,mid=0;
	cout<<"Enter a word to check for palindrome:"<<endl;
	gets(s);
	for(i=0;s[i]!='\0';++i,++l);
	mid=(l-1)/2;
	for(i=0,j=l-1;i<=mid,j>=mid;++i,--j)
	{	if(s[i]==s[j])
		v++;
		if(s[i]!=s[j])
		e++;
	}

	if(v==l/2+1)
	cout<<"\n"<<"The word "<<"'"<<s<<"'"<<" is a palindrome";
	else
	cout<<s<<" is not a palindrome!"<<endl;
	getch();
}