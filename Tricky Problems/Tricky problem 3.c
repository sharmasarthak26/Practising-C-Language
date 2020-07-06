Write a program to get a number up to 50 digits from user.
check whether the number is a valid number.
Valid number contains digits 0 -9.

			
Example:

	Valid Number   : 123487654876543456778987
				
        Invalid Number : 12334578UAX4343abc343445

C Program:- 
#include<stdio.h>
int main()
{
      char a[50];
      scanf("%s",a);
      int i;
      int flag =0;
     
      for(i=0;a[i]!='\0';i++)
      {
         if(a[i]>='0' && a[i]<='9')
         {
              flag = 1;
	 }
	 else
	 {
              break;       
	 }   
      }
      if(flag == 1)
      {
        printf("Valid number\n");
      }
      else
      {
        printf("Invalid number");
      } 
      return 0;

}

