#include<iostream>
using namespace std;
int main()
{
	const int a=5;
	int const*p=&a;
	cout<<*p<<"\n"<<p;
	return 0;
}
