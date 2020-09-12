#include<iostream>
using namespace std; 
int getNextGap(int gap) 
{  
	gap = (gap*10)/13; 

	if (gap < 1) 
		return 1; 
	return gap; 
} 
void combSort(int a[], int n) 
{ 
 
	int gap = n; 
	bool swapped = true; 
	while (gap != 1 || swapped == true) 
	{ 
		gap = getNextGap(gap); 
		swapped = false; 
		for (int i=0; i<n-gap; i++) 
		{ 
			if (a[i] > a[i+gap]) 
			{ 
				int temp=a[i];
				a[i]=a[i+gap];
				a[i+gap]=temp; 
				swapped = true; 
			} 
		} 
	} 
} 
 
int main() 
{ 
	int n;
	int a[n];
	cout<<"Enter size of array:\n";
	cin>>n;
	cout<<"Enter elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	combSort(a, n); 

	cout<<"Sorted array: \n"; 
	for (int i=0; i<n; i++) 
	{
		cout<<" "<<a[i]; 
   }
	return 0; 
} 

