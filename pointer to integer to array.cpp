#include<iostream>
using namespace std;
int main()
{
	int a=1,b=2,c=3,d=4;
	int *a1,*b1,*c1,*d1,*a2,*b2,*c2,*d2;
//	int arr1[4],arr2[4];
	a1=&a;
	b1=&b;
	c1=&c;
	d1=&d;
	a2=&a;
    b2=&b;
	c2=&c;
	d2=&d;
	int arr1[]={*a1, *b1, *c1, *d1};
	for(int i=0;i<4;i++)
	{
	cout<<"\nElement is:"<<arr1[i];
    }
    int arr2[]={*a2,*b2,*c2,*d2};
    for(int j=0;j<4;j++)
    {
    	cout<<"\nElement is:"<<arr2[j];
	}
}
