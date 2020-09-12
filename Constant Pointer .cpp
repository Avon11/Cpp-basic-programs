#include<iostream>
using namespace std;
int main()
{
	int a=29,b=3;
	int *const p=&a;
//	p=&b; ERROR BECAUSE POINTNTER IS CONSTANT
	cout<<"\n"<<*p<<"\n"<<a<<"\n"<<b;
	return 0;
}
