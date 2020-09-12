#include<iostream>
using namespace std;
int main()
{
	int i;
	char ch;
	void *p;
	i=10;
	ch='A';
	p=&i;
	cout<<"\nPointer points to integer value:";
	cout<<*(int *)p<<endl;
	p=&ch;
	cout<<"Pointer points to character:";
	cout<<*(char *)p<<endl;
	return 0;
}
