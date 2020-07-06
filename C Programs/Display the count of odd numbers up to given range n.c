Write a C program to Display the count of odd numbers up to n.

Ex:- 1)assume ranges from 10 to 100

     Output:- 45

     2)assume ranges from 100 to 1000
     
     Output:- 450



C program:-

#include<stdio.h>
int main()
{
	int i,count =0,n;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%2 != 0)
		{
			count++;
		}
	}
	printf(“%d”,count);
	return 0;
}




