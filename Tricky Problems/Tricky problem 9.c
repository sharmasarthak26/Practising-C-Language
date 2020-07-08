Write a C program to reverse every word from given string using function.

Ex:-   Enter the string:
       My name is Manikumar
       reversed string:
       ramukinam si eman ym

C program:-

#include<stdio.h>

int check_length(char *x,int *p);

int reverse_string(char *x,int len);

int main()

{
    
	char a[25];
    
    scanf("%[^\n]s",a);
 
        int len = 0;  
        check_length(a,&len);
 
       //printf("len:%d\n",len);
  
        reverse_string(a,len);
 
        printf("reverse_string:%s\n",a);

        return 0;
}

int check_length(char *x,int *p)

{
   
	 int i;
  
         for(i=0;x[i]!='\0';i++)
  
         {
       
		 (*p)++;
 
         }
  
         return 0;

}

int reverse_string(char *x,int len)

{
   	
	 int j,k;
 
         j=0;
     
    k=len-1;
  
         while(j<k) 

         {
   
                char temp = x[j];
 
                x[j] = x[k];
    
                x[k] = temp;
 
                j++;
   
                k--;
     
    }
  
         return 0;

}



