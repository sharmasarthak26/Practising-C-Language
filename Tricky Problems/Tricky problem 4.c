Write a program to get a number from user up to 50 digit.
print the reverse of  the number using "printf ("%s", ...)" function. 
Before reversing the number check whether the number is a valid number.


C Program:-

#include<stdio.h>

#include<string.h>

int main()

{   
   
	 char b[50];
 
         char a[50];
  
         int j,k,len,temp;
 
         scanf("%s",b);
   
         len = strlen(b);
 
         int i;
   
         int flag =0;

         for(i=0;b[i] != '\0';i++)
 
           {
     
               if(b[i]>='\0' && b[i]<='9')
 
                 {
           
                         a[i] = b[i];
  
                          flag =1;
  
                  }
 
            }
  
            a[i] = '\0';
  
      
    if(flag == 1)
  
           {
       
                 printf("Valid number:%s\n",a);

         
        j = 0;
   
                 k = len-1;
  
         
        while(j<k)
   
                 {
            
                     temp = a[j];
 
                     a[j] = a[k];
            
                     a[k] = temp;
  
                     j++;
                     k--;

                 }
      
           printf("Reversed string:%s",a);
 
           }
 
           else
  
             {
    
                  printf("invalid number");

             }
           return 0;


}



