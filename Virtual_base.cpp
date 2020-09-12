#include<iostream>
using namespace std;
class student 
{
	protected:
		int roll_no;
		public:
		void get_no(int a)
		{
			roll_no=a;
		}
		void put_no(void)
		{
			cout<<"Roll no."<<roll_no;
		}
};
class test:virtual public student
{
	protected:float part1,part2;
	public:
		void get_marks(float x, float y)
		{
			part1=x;
			part2=y;
		}
		void put_marks()
		{
			cout<<"Marks obtained:"<<part1<<","<<part2;
		}
};
class sports:virtual public student
{
	protected:float score;
	public:
		void get_score(float s)
		{
			score=s;
		}
		void put_score()
		{
			cout<<"Score:"<<score;
		}
};
class result:public test,public sports
{
	float total;
	public:
		void display(void);
};
void result::display(void)
{
	total=part1+part2+score;
	put_no();
	put_marks();
	put_score();
	cout<<"Total"<<total;
}
int main()
{
	result s;
	s.get_no(100);
	s.get_marks(55,75);
	s.get_score(15);
	s.display();
	return 0;
}


