#include<iostream>
using namespace std;
int main()
{
	int arr[]={5,3,4,1,2};
	int min,j,size=5;
	int temp;
	for(int i=0;i<size-1;i++)
	{
		min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[min]>arr[j])
				min=j;
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	cout<<"\nSorted array is:";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	return 0;
}
