#include<iostream>
using namespace std;
class d
{
	public:
		int feetin,feetout,inchin,inchout,metin,cmin,inchto,feetto;
	
		int inchdis();
		int metdis();
		
	friend void display(d);
};
int d::inchdis()
{
	cout<<"\nEnter distance in Feet:";
	cin>>feetin;
	cout<<"\nEnter distance in inches:";
	cin>>inchin;
}
int d::metdis()
{
	cout<<"\nEnter distance in meter:";
	cin>>metin;
	cout<<"\nEnter distance in centimeter:";
	cin>>cmin;
}
void display(d d1)
{
	d1.feetout=d1.metin*3.28;
	d1.inchout=d1.cmin/2.54;
	d1.feetto=d1.feetin+d1.feetout;
	d1.inchto=d1.inchin+d1.inchout;
	cout<<"\nTotal distance is:"<<d1.feetto<<"ft"<<d1.inchto<<"in";
}
int main()
{
	d d1;
	d1.inchdis();
	d1.metdis();
	display(d1);
}
