#include<iostream>
using namespace std;
class time
{
	public:
	int min,hr,sec,minutes;
	public:
		time(int x,int y,int z)
		{
			hr=x;
			min=y;
			sec=z;
		}
		operator double()
		{
			minutes=hr*60+min;
			for(;sec>59;sec=sec-60)
			{
				minutes+=1;
			}
			return (minutes);
		}
		void show()
		{
			cout<<"\nTime in minutes is:"<<minutes;
		}
};
int main()
{
	double minutes;
	int hr,min,sec;
	cout<<"\nEnter time in hour minutes and second:";
	cin>>hr>>min>>sec;
	time t1(hr,min,sec);
	minutes=t1;
	t1.show();
}

