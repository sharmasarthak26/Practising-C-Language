Write a C program to Separate unit digit in given number?


Ex:-    Input -78
	Output -8


C Program:-

#include<stdio.h>
int main()
{
	int num, val;
	scanf(“%d”,&num);
	val = num%10;
	printf(“%d”,val);
	return 0;
}
