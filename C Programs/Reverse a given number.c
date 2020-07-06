Write a program to Reverse a given number.

Ex1:- Two Digit Number
                   
      Input  – 78
      Output – 87

Ex2:- Three Digit Number

	Input  – 786
	Output – 687

Ex3:- Six digit number

	Input  – 123456
	Output - 654321

C program:-

#include<stdio.h>
int main()
{
	int num, mod;
	int ans =0;
	scanf(“%d”,&num);
	while(num>0)
	{
		mod = num%10;
		ans = ans * 10+mod;
		num = num/10;
	}
	printf(“%d”,ans);
	return 0;
}
