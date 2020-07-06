Write a C program to Display the sum of odd numbers up to n.

Ex:- 1) assume ranges from 1 to 10
        
        Output:- 25

     2) assume ranges from 10 to 100

	Output:- 2475

     3) assume ranges from 100 to 1000
		
        Output:- 247500


C program:-

#include<stdio.h>
int main()
{
	int i,sum =0,n;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%2 != 0)
		{
		Sum += i;
		}
	}
	printf(“%d”,sum);
	return 0;
}
