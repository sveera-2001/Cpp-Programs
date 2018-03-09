#include<conio.h>
#include<iostream.h>
void main()
{	clrscr();        //Program to claculate salary according to user's age
	int exp,salary,age;
	cout<<"Do you have experience in this field?";
	cout<<"\n\n Enter 1 for yes and 0 for no:";
	cin>>exp;
	cout<<"Enter your age:";
	cin>>age;
	if (exp==1 && age>35)
	cout<<"\nYour salary is Rs6000";
	else
	if (exp==1 && age>28)
	cout<<"\nYour salary is Rs4800";
	else
	if (exp==1 && age>18)
	cout<<"\nYour salary is Rs3000";
	else
	if (exp==0 && age>18)
	cout<<"\nYour salary is Rs2000";
	else
	if (exp==0 && age<18)
	cout<<"\nYou're not eligible for this job";
	getch();
}
