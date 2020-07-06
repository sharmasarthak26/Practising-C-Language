Write a C program to Display the digits in increasing order from 1000 to 9999.

Ex:-    Valid  :- 1234 is in increasing order.
	Invalid:- 2314 is not in increasing order.

	Output:- 126(counts)

C program:-

#include<stdio.h>
int main()
{
	int i;
	int d1,d2,d3,d4;
	int count =0;
	for(i=1000;i<9999;i++)
	{
		d1 = i/1000;
		d2 = (i/100)%10;
		d3 = (i%100)/10;
		d4 = i%10;

		if((d1<d2)&&(d2<d3)&&(d3<d4))
   		{
			printf(“%d%d%d%d\n”,d1,d2,d3,d4);
			count++;
   		}
	}
	printf(“%d”,count);
	return 0;
}

