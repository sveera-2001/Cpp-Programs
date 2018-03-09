#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int pal(char a[][50],int n)
{	int i,p=0;            //Count the number of palindromes
	char b[50][50];
	for(i=0;i<n;++i)
	{        strcpy(b[i],a[i]);
		 strrev(b[i]);
	}
	for(i=0;i<n;++i)
	{	if(strcmp(a[i],b[i])==0)
			++p;
	}
	return p;
}
void main()
{	clrscr();
	char c[50][50];
	int n,v,i;
	cout<<"How many strings?:";
	cin>>n;
	for(i=0;i<n;++i)
	{	cout<<"Enter string "<<i+1<<":";
		gets(c[i]);
	}
	v=pal(c,n);
	if(v>0)
	cout<<"\nNo of palindromes:"<<v;
	else if(v==0)
	cout<<"\nNo palindromes!";
	getch();
}