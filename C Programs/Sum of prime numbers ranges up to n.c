Write a C program to Display the sum of prime numbers up to n.

Ex:-   1)assume ranges from 1 to 10
	
	Output:- 17

       2)assume ranges from 10 to 100

	Output:- 1043

       3)assume ranges from 100 to 1000
	
	Output:- 75067

C program:-

#include<stdio.h>
int main()
{
	int i,k,sum=0,n;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{	int j=0;
		for(i=1;i<=k;i++)
		{
		if(k%i == 0)
			{
				j++;
			}
		}
		if(j==2)
		{
    			Sum += k;
		}
	}
	printf(“%d”,sum);
	return 0;
}
