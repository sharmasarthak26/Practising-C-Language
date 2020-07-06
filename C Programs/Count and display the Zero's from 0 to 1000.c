Write a C program to display the zero's in numbers from 0 to 1000.

Ex:-  There are 193 Zero's in all the numbers between 0 to 1000.

      Output:- 193

C Program:-

#include <stdio.h> 

int main() 

{ 
  	 
	int i,n,k,count=1;

        for(i=0;i<=1000;i++)
 
	  {
       
		n=i;

         
       while(n>0)
 
		{
      
                 k = n % 10;
 
                 if(k==0)
  
        	    {
        
		       //printf("k:%d\n",i);
  
                       count++;
    
                    }
           
                 n=n/10;

                }

          }
 
          printf("count:%d",count);
	  return 0;

}

