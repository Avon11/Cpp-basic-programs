#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j,ele,c=0;
	cout<<"Enter array:\n";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter element which u want to delete:\n";
	cin>>ele;
	for(i=0;i<5;i++)
	{
		if(ele==arr[i])
		{
		
		    	for(j=0;j<5;j++)
		        	{	
				        arr[j]=arr[j+1];
				
			        }
		       	c++;
		}
	}
	for(j=0;j<5-c;j++)
	{
		cout<<arr[j];
	}
}
