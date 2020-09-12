#include<iostream>
using namespace std;
class ar
{
	int arr[1000],n,element,i,beg=0,mid,end=n-1,loc=-1;
public:
	void getdata()
	{
		cout<<"enter number of array elements";
		cin>>n;
		cout<<"\nenter the array elements";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}
	
/*	void linear()
	{
		cout<<"enter the element to search ";
		cin>>element;
		for(int i=0;i<n;)
		{
			if(element==arr[i])
			{
				cout<<"element is found at position -->> "<<i+1;
				return ;
			}
			i++;
		}cout<<"element not found XD";
	}*/
	void sort()
	{
		int c;
		for(int j=0;j<n-1;j++)
		{
		for(i=0;i<n;i++)
		{
			if(arr[i]>arr[i+1])
			{
			 c=arr[i];
			 arr[i]=arr[i+1];
			 arr[i+1]=c;
		    }
		}
	    }
	}
	void displaysort()
	{
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<"\n";
		}
	}
	void binary()
	{
		int s;
		cout<<"enter the value to search ";
		cin>>s;
		while(beg<=end)
		{
			mid=(beg+end)/2;
			if(arr[mid]==s)
			{
				loc==mid;
				cout<<"element is found  XD ";	
			}
			else if(arr[mid]>s)
			{
				end =mid - 1;
			}
			else if(arr[mid < s])
			{
				beg =mid +1;
			}
		}
		if(loc!=-1)
		{
			cout<<"element found at loaction -->>"<<loc+1;
		}
		else
		{
			cout<<"element not found";
		}
	}
};
int main()
{
	ar a1;
	a1.getdata();
	//a1.linear();
	a1.sort();
	a1.displaysort();
	a1.binary();
	
	cout<<"today is funday ";
	
	
	
	
	return 0;
}
