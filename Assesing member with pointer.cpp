#include<iostream>
using namespace std;
class simple
{
	public:
	int a=100,b=750;
	int *ptr;
};
main()
{
	simple s;
	simple 
	*ptr;
	ptr=&s;
	cout<<s.a<<"\n";
	cout<<ptr->a<<"\n";
	cout<<ptr->b<<"\n";
	cout<<(*ptr).b;
	return 0;
}
