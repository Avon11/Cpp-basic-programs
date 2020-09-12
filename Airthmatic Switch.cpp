#include<iostream>
using namespace std;
class Calci
{
	public:
		int a,b,c;
	public:
		int sum();
		int mul();
		int div();
		int sub();
		
};
int Calci :: sum()
{
		    cout<<"Enter 1st number:";
	        cin>>a;
           	cout<<"\nEnter 2nd number:";
           	cin>>b;
			c=a+b;
			cout<<"Addition is ="<<c;
}
int Calci :: mul()
{
	    cout<<"Enter 1st number:";
	    cin>>a;
       	cout<<"\nEnter 2nd number:";
		cin>>b;
		c=a*b;
		cout<<"Multiplication is="<<c;
}
int Calci :: div()
{
	cout<<"Enter 1st number:";
	cin>>a;
    cout<<"\nEnter 2nd number:";
    cin>>b;
    c=a/b;
	cout<<"Division is="<<c;
}
int Calci :: sub()
{
	cout<<"Enter 1st number:";
	cin>>a;
    cout<<"\nEnter 2nd number:";
    cin>>b;
    c=b-a;
	cout<<"Substraction is="<<c;
}
int main()
{
	Calci c1;
	int d;
	cout<<"\n 1 for addition.";
	cout<<"\n 2 for multiplication.";
	cout<<"\n 3 for substration.";
	cout<<"\n 4 for Divsion";
	cout<<"\n Enter your choice:";
	cin>>d;
	switch(d)
	{
		case 1:
			c1.sum();
			break;
		case 2:
		    c1.mul();
			break;
		case 3:
		    c1.sub();
			break;
		case 4:
		    c1.div();
			break;	
		default:
			cout<<"wrong value";
			break;		
	}
}
