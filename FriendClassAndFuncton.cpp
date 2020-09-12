#include<iostream>
using namespace std;
class rec;
class cir
{
	public:
		float r,area;
	public:
	float input()
	{
		cout<<"Enter radius of circle:";
		cin>>r;
	}
	float calc()
	{
		area=(3.14*r)*r;
		return area;
	}	
	friend void display(cir,rec);
};
class rec
{
	public:
		int l,w,area;
	public:
		int input()
		{
			cout<<"\nEnter length of rectangle:";
			cin>>l;
			cout<<"\nEnter Wridth of rectangle:";
			cin>>w;
		}
		int calc()
		{
			area=l*w;
			return area;
		}
	friend void display(cir,rec);
};
void display(cir c,rec d)
{
	cout<<"\nArea of circle is:"<<c.calc();
	cout<<"\nArea of rectangle is:"<<d.calc();
}

int main()
{
	cir c;
	rec d;
	c.input();
	c.calc();
	d.input();
	d.calc();
	display(c,d);
}
