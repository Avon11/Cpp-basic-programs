#include<iostream>
#include<conio.h>
#include<math.h>
 main()
{
	int num,n1,n2,i,j,rev;
	for(i=101;i<1000;i++)
	{
		for(j=101;j<1000;j++)
		{
			num=i*j;
			for( ;num!=0; )
			{
				 rev=rev*10;
				rev=rev+num%10;
				num=num/10;
			}
			if(num==rev)
			{
				std::cout<<" "<<num;
				break;
			}
		}
	}
	getch();
}
