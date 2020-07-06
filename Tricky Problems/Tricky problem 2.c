Write a program to get a user input as string using “scanf”.
Convert the string  into integer and  print the same as integer using “printf”.

Ex:-

#include <stdio.h>
int main()
{
// declare variables
printf("Enter the Number : ");
scanf("%s",x);
// write the code
printf("Entered  Number  = ");
printf("%d\n",y);
}

C Program:-

#include<stdio.h>
int main( )
{       char a[10];
	printf("Enter the Number: ");
	scanf("%s",a);
	int i,b;
        for(i=0;i<10;i++)
	{
	    b = s[i] - '0';
            printf("%d",b);
        }
        return 0;
}