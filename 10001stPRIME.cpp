#include<iostream>
using namespace std;
int main()
{
	long cheak,n=0,c=0;
	cin>>n;
	for(int i=2;i<=20000;i++)
	{
		cheak=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				cheak=1;
				break;
			}
		}
		if(cheak==0)
		c++;
		if(c==n)
		{
			cout<<n<<"prime number is"<<i;
			break;
		}
	}
	return 0;
}

