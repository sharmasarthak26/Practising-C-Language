Write a C program to Display the count of prime numbers up to n.

Ex:- 1) assume ranges from 1 to 10
    
	Output:- 4

     2) assume ranges from 10 to 100
	
	Output:- 21

     3) assume ranges from 100 to 1000

	Output:- 143


C program:-

#include<stdio.h>
int main()
{
	int i,k,count=0,n;
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
    			count++;
		}
	}
	printf(“%d”,count);
	return 0;
}
