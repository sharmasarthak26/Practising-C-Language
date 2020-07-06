Write a c program to check whether palindrome or not and print yes or no.

Ex:-  Test cases: 2
      first num : 121
      Yes! It's a palindrome
      second num: 345
      No! It's not a palindrome

C Program:-

#include <stdio.h>

int check_palin(int num);

int main() 
{
	
       
	int test,num;

	scanf("%d",&test);

	while(test--)
	
        {

 	    scanf("%d",&num);

	    int final = check_palin(num);

	    if(final == num)
	   
            {
	      
		  printf("Yes! It's a palindrome\n");

	    }
	    
	    else

	    {
	      
		  printf("No! It's not a palindrome\n");

	    }

       	}

	return 0;

}

int check_palin(int num)

{
   
	 int res=0,mod;

         while(num>0)
 
         {
   
             mod = num % 10;
  
             res = res * 10 + mod;
   
             num /= 10;
  
         }
    

         return res;

}
