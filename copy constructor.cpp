#include<iostream>
using namespace std;
class example
{
	public:
	int a,b;
	public:
		example(int x,int y)
		{
		a=x;
		b=y;
		cout<<"Iam Bhagwaan.";
		}
		example(const example&obj)
		{
			a=obj.a;
			b=obj.b;
			cout<<"\nIam Aswathamaa";
		}
		void display()
		{
			cout<<"\n Values:"<<a<<"\t"<<b;
		}
};
int main()
{
	example object(10,20);
	example object2(object);
	example object3=object;
	object.display();
	object2.display();
	object3.display();
}

