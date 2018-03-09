#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{                      //Count no of vowels and words
	clrscr();
	char s[100];
	int i,v=0,w=0;
	cout<<"Enter a string:"<<endl;
	gets(s);
	for(i=0;s[i]!='\0';++i)
	{	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E')
		++v;
		else if(s[i]==' ')
		++w;
	}
	cout<<"\nNo of vowels in the sentence: "<<v;
	cout<<"\nNo of words in the sentence: "<<w+1;
	getch();
}