a): Write a program to find out the total number of prime numbers below 1,000,000 have the sum of their digits equal to 14?

			Answer : 1218

b) Write a program to find out the total number of prime numbers below 10,000,000 have the sum of their digits equal to 14?

			Answer: 3547

c) Write a program to find out the total number of prime numbers below 100,000,000 have the sum of their digits equal to 14?

			Answer: 9268


C Program:-

#include<stdio.h>
int main()
{
	int i,k,temp;
	int sum =0;
	int count =0;
	for(k=1;k<=1000000;k++)
	  {
	   int j=0;
   	   for(i=1;i<=k;i++)
		{
	         if(k%i == 0)
	          {
		     j++;
	          }
                }
           if(j==2)
           {
              temp = k;
              while(k>0)
              {
	          Sum += k%10;
	          k /= 10;
              }
              k = temp;
             if(sum==14)
	       {
		   count++;
               }
            sum = 0;
          }
       }
       printf(“%d”,count);
       return 0;
}


