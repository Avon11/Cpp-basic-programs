#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class str
{
	char *name;
	int length;
	public:
		str(char *s)
		{
			length = strlen(s);
			name=new char[length];
			strcpy(name,s);
		}
		void show ()
		{
			cout<<"Name is:"<<name<<endl;
			cout<<"Length is:"<<length<<endl;
		}
};
int main()
{
	char *first="Bhagwaan";
	str n1(first), n2("Abhinav"), n3("Rana-na-na-na");
	n1.show();
	n2.show();
	n3.show();
}

