#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	ofstream outfile;
	outfile.open("Abhi.txt");
	while(ch!='!')
	{
		ch=getche();
		outfile.put(ch);
	}
	outfile.close();
	ofstream out;
	out.open("Anshi.txt");
	ifstream iff("Abhi.txt");
	while(!iff.eof())
	{
		if(ch==' '||ch=='\t')
		continue;
		out.put(ch);
	}
	cout<<"Data saved";
	out.close();
	iff.close();
	return 0;
}
