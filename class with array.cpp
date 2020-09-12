#include<iostream>
using namespace std;
class books
{
	char title[20];
	float price;
	public:
		void getdata();
		void putdata();-
};
void books::getdata()
{
	cout<<"\nTitle:";
	cin>>title;
	cout<<"\nPrice:";
	cin>>price;
}
void books::putdata()
{
	cout<<"\nTitle:"<<title;
	cout<<"\nPrice:"<<price;

}
const int size=3;
main()
{
	int i;
	books book[size];
	for(i=0;i<size;i++)
	{
		cout<<"Enter the detials of the books:"<<i+1<<"\n";
		book[i].getdata();
	}
	for(i=0;i<size;i++)
	{
		cout<<"The details of the book : "<<i+1<<"\n";
		book[i].putdata();
	}
}
