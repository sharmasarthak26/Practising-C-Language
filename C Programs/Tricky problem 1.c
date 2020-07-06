Write a program to get a user input as Integer variable using “scanf”.
Convert the integer into character string and print the same as string using “printf”


Ex:-

#include <stdio.h>
int main()
{
// declare variables
printf("Enter Number : ");
scanf("%d",&x);
// write the code
printf("Entered Number = ");
printf("%s\n",a);
}


C program:-

#include<stdio.h>
int main()
{
	char a[10],b[10];
	int i,j,index;
	index = 0;
	printf("Enter Number: ");
	scanf("%d",&i);
	j = i;
	while(j)
	{
		a[index++] = j%10;
		j /= 10;
	}
	for(i=0;i<index;i++)
	{
		b[i] = a[index - i] + 48;
	}
	b[i] = '\0';
	printf("Entered Number: ");
	printf("%s",b);
	return 0;
}

