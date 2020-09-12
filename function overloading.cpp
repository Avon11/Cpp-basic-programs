#include<iostream>
using namespace std;
int add(int x,int y)
{
	return(x+y);
}
int add(int x,float y)
{
	return(x+y);
}
int add(float x,float y)
{
	return(x+y);
}
int add(float x,int y)
{
	return(x+y);
}
 int main()
 {
 	add(5,6);
 	add(5,6.3f);
 	add(5.2f,6.3f);
	add(5.2f,6);
 }
	

