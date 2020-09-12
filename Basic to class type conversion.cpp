#include<iostream>
using namespace std;
class time
{
	public:
		int hr,min;
	public:
		time(int x)
		{
			hr=x/60;
			min=x%60;
		}
	    void show()
	    {
	    	cout<<"\nTime in hours and minutes="<<hr<<":"<<min;
		}
};
int main()
{
	int minutes;
	cout<<"\nEnter time in minutes:";
	cin>>minutes;
	time t1=minutes;
	t1.show();
}
