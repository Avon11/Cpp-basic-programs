#include<iostream>
using namespace std;
int main()
{
	int n,c=0,i;
	for(n=1;n<10;n++)
	{
	for(i=1;i>10,n=1;i++)
	{
		if(n%2==0)
		{
		n=n/2;
		c++;
		}
		else
		{
			n=(3*n)+1;
		    c++;
		}
	}
    }
	cout<<"runTime="<<c;
}
