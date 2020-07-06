Write a c program to Sum of digits for a given number.

Ex1:- Two digit number

	Input  - 57
	Output – 12

Ex2:- Three digit number

	Input  – 579
	Output – 21

Ex3:- Five digit number

	Input  – 13579
	Output - 25

C program:-

#include<stdio.h>
int main()
{
	int num, mod;
	int sum =0;
	scanf(“%d”,&num);
	while(num>0)
	{
		mod = num%10;
		sum = sum + mod;
		num = num/10;
	}
	printf(“%d”,sum);
	return 0;
}
