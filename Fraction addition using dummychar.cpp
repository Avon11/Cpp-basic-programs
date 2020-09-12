#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	char dumychar;
	int result1,result2;
	cout<<"Enter first fraction:";
	cin>>a>> dumychar >>b;
	cout<<"Enter second fraction:";
	cin>>c>>dumychar>>d;
	result1=(a*d)+(b*c);
	result2=b*d;
	cout<<"Addition is: "<<a<<dumychar<<b<<" + ";
	cout<<c<<dumychar<<d<<" = "<<result1<<dumychar<<result2;
}
