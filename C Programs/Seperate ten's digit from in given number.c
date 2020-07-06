Write a C program to Separate tens’s digit in a given number.


Ex:- Input – 78
     Output - 7

C Program:-

#include<stdio.h>
int main()
{
	int num, val;
	scanf(“%d”,&num);
	val = num/10;
	printf(“%d”,val);
	return 0;
}
