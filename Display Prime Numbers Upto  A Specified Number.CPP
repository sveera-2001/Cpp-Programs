#include<iostream.h>
#include<conio.h>
int isprime(int n)
{	int a,b,c=0,d=0,i;
	a=n/2;
	for(i=1;i<=a;++i)
	{	if((n%i)==0)
		++c;
		else
		++d;
	}
	if(c<=1)
	return n;

}                     //To find prime number upto n numbers using ifunc
void main()
{
	clrscr();
	int e[100],i,a,f,v=0,r=0;
	cout<<"To print prime numebrs upto how many numbers?:";
	cin>>a;
	cout<<"\nPrime numbers upto "<<a<<":"<<"\n";
	for(i=2;i<a;++i)
	{	f=isprime(i);
		if(f>v)
		{       v=f;
			cout<<"\nPrime number "<<++r<<":"<<f;
		}

	}
	cout<<"\n\nTotal number of prime numbers:"<<r;
	getch();
}