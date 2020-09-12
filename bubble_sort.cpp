#include<iostream>
using namespace std;
int main()
{
	int arr[]={5,3,4,1,2};
	int size=5;
	int temp;
	for(int i=0;i<size-i;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
		if(arr[j]>arr[j+1])
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		}
	}
	}
	cout<<"\nSorted array is:";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	return 0;
}
