#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
class student
{
		public:
			int roll,marks;
			string name;
		public:
			void getdata()
			
			{
				cout<<"\nEnter Roll no. of student:";
				cin>>roll;
				cout<<"\nEnter name of student:";
				getline(cin>>ws,name);
				cout<<"\nEnter marks of student:";
				cin>>marks;
			}
			void display()
			{
				cout<<setw(10)<<roll<<setw(10)<<name<<setw(10)<<marks<<"\n";
			}
};
int main()
{
	int i;
	fstream f1;
	student s[3];
	char ch='y';
	f1.open("D:\\C++\\student.txt",ios::binary|ios::out|ios::in);
	for(i=0;i<3;i++)
	{
		while(ch=='y')
		{
			s[i].getdata();
			f1.write((char*)&s[i],sizeof(s[i]));
    		cout<<"Want to input more(y/n)";
			cin>>ch;
		}
	} 
	f1.seekg(0,ios::beg);
	f1.read((char*)&s,sizeof(s));
	cout<<setw(10)<<"Roll No."<<setw(10)<<"Name"<<setw(10)<<"Marks"<<endl;
	for( i=0;i<3;i++)
	{
		while(f1.eof()==0)
		{
			s[i].display();
			f1.read((char*)&s[i],sizeof(s[i]));
		}
    }
}
