#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class reservation
{
	public:
		int age;
		string name,add,destination,startLocation,train,mob;
	public:
		void res();
		void revDetails();
		void cancel();
};
void reservation::res()
{
	fstream fout("train.txt",ios::app);
	cout<<"\nEnter Name of passenger:";
	getline(cin>>ws,name);
	cout<<"\nEnter age:";
	cin>>age;
	cout<<"\nEnter Address:";
	getline(cin>>ws,add);
	cout<<"\nEnter Mobile number:";
	getline(cin>>ws,mob);
	cout<<"\nEnter destination:";
	getline(cin>>ws,destination);
	cout<<"\nEnter starting location:";
	getline(cin>>ws,startLocation);
	cout<<"\nEnter train no.:";
	getline(cin>>ws,train);
	fout<<"Name:"<<name<<endl;
	fout<<"Age:"<<age<<endl;
	fout<<"Address:"<<add<<endl;
	fout<<"Mobile no.:"<<mob<<endl;
	fout<<"Destination:"<<destination<<endl;
	fout<<"Starting Location:"<<startLocation<<endl;
	fout<<"Train no.:"<<train<<endl;
	fout.close();
}
void reservation::revDetails()
{
	ifstream fin("train.txt",ios::in);
	char ch;
	while(!fin.eof())
	{
		fin>>noskipws>>ch;
		cout<<ch;
	}	
		fin.close();
}
void reservation::cancel()
{
	ofstream of;
	of.open("train.txt",ofstream::out|ofstream::trunc);
	of.close();
}
int main()
{
	reservation r;
	int n;
	cout<<setw(65)<<"******************************Welcome to Railway Reservation System******************************\n";
	cout<<"\n1.To book reservation.\n";
	cout<<"\n2.To enter reservation details.\n";
	cout<<"\n3.Cancel reservation\n\n";
	for(int i=0;;i++)
	{
		cout<<"\n1.To book reservation.\n";
		cout<<"\n2.To enter reservation details.\n";
		cout<<"\n3.Cancel reservation\n\n";
		cout<<"Enter your choise.\n";
		cin>>n;
		switch(n)
		{
			case 1:
				{
					r.res();
					cout<<"\nReservation Successful!!!\n";
					break ;
				}
			case 2:
				{
					r.revDetails();
					break;
				}
			case 3:
				{
					r.cancel();
					cout<<"\nCancel successful\n";
					break;
				}
			case 4:
				{
					exit(1);
				}
			default:
				{
					cout<<"Wrong choise.\n";	
				}
			
		}
	}
}
