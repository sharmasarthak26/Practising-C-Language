Write a C program to remove leading zeros in given number.

Ex:- Enter the numbers: 00001234
     Output:- 1234
     

C program:-

#include<stdio.h>

int main()

{
   
	 char c[10];
     
    printf("enter the numbers:");
  
         scanf("%s",c);

     
    char d[5];
  
         int start=0,i,j=0;
 
         for(i=0;c[i]!='\0';i++)
     
    {
      
		if(c[i] == '0')

                {
        
                    start++;
 
                }
      
                else
 
                {
       
                    break;
 
                }
  
         }
   
         for(i=start;c[i]!='\0';i++)

         {
       
               d[j++] = c[i];
     
    }
 
         d[j] = '\0';
 
         printf("non zero numbers:%s",d);
         return 0;


}



