#include<iostream>
using namespace std;
int main()
{
	int var[3]={20,100,300};
	int *ptr;
	ptr=var;
	int i=0;
	while(ptr<=&var[2])
	{
		cout<<"Address of Variable:"<<i;
		cout<<ptr<<endl;
		ptr++;
		i++;
	}
	return 0;
}
