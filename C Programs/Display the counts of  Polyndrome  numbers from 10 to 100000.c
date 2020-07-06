Write a C program to Display the counts of  Polyndrome  numbers from 10 to 100000.

   Ex:- 121,565,12321,76867,88688.

   Output:- 1089(counts)


C program:-

#include<stdio.h>
int main()
{	
    int i,temp,mod;
    int res =0;
    int count =0;
   for(i=10;i<=100000;i++)
   {
	temp =i;
	while(i>0)
	{
  	    mod = i%10;
	    res = res * 10+mod;
	    i /= 10;
	 }
	i = temp;
	if(res == temp)
	{
		count++;
	}
	res = 0;
   }
   printf(“%d”,count);
   return 0;
}

