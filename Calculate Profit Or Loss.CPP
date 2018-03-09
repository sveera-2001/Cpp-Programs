#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	float sp,cp;
	cout<<"Enter the cost of the product: ";
	cin>>cp;
	cout<<"Enter the selling price of the product: ";
	cin>>sp;
	if(sp>cp)
		cout<<"Seller has made a profit by "<<sp-cp<<" rupees";
	else if(sp==cp)
		cout<<"Seller has made no profit";
	else
		cout<<"Seller had lost "<<cp-sp<<" rupees";
	getch();
}
