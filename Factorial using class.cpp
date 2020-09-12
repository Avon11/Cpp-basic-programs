#include<iostream>
using namespace std;
class factorial
{
	public:
		int fact();
	
};
int factorial :: fact()
{
	    	int n,i,f;
			cout<<"\nEnter the number:";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				f=f*i;
			}
			cout<<"\nFactorial is="<<f;
}
int main()
{
	factorial F1;
	F1.fact();
}
