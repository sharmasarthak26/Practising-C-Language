Write a program to Print the number of zeroes you encounter between the  numbers 0 to 1000

Ex:-

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

