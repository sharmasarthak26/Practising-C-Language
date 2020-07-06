Write a C program to Display odd numbers up to n.

Ex:-  assume n = 10.

      Output:- 1 3 5 7 9 

C program:-

#include<stdio.h>
int main()
{
	int i =0;
	for(i=0;i<10;i++)
	{
	if(i%2 != 0)
	printf(“%d ”,i);
	}
	return 0;
}
