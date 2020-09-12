#include<iostream>
using  namespace std;
int main ()
{
	int a=39,b=47;
	const int *p=&a;
	cout<<"*P="<<*p<<endl;
//	*p=20; ERROR BECAUSE THE VALUE OF POINTER IS CONSTANT
	p=&b;
	cout<<"*P="<<*p<<endl;
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
}
