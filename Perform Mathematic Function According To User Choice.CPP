#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();                   //Program to perform arithmetic calculations
	char ch;
	long float a,b,res;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"\n Enter an operator:";
	cin>>ch;
	switch (ch)
	{
		case '+'  :res=a+b;break;
		case '-' :res=a-b;break;
		case '*'  :res=a*b;break;
		case '/'  :if (b==0)
			   cout<<"Zero error";
		else
		res=a/b;
		break;

		case '%' :if (b==0)
		 cout<<"Zero error";
		else
		{ int q,r;
		q=a/b;
		r=a-(b*q);
		res=r;
		}
		break;

		default :cout<<"Wrong Operator";break;
	}

cout<<"\n  Result:"<<res;
getch();
}




