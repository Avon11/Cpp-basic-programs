#include<iostream>
using namespace std;
class x
{
	public:
		int a,b,c,ff;
		float d,e,f;
		char ch;
		public:
		x(int a)
		{
			cout<<"\n"<<a;
		}
		x(int b,float d)
		{
			cout<<"\n"<<b<<","<<d;
		}
		x(float e)
		{
			cout<<"\n"<<e;
		}
		x(int c,char ch,float f)
		{
			cout<<"\n"<<c<<",";
			cout<<ch<<",";
			cout<<f;
		}
};
int main()
{
	x x1(10);
	x x2(12,3.4);
	x x3(45.8f);
	x x4(89,'r',56.235);
	x x5(547);
}
