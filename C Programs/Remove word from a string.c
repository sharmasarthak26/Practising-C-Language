Write a C program to remove a word from the given string.

Ex:- Enter the string
     My name is Manikumar Tharmaraj
     Enter the word
     My
     String after removed the word:
     name is Manikumar Tharmaraj

C program:-

#include<stdio.h>

#include<string.h>

char* removeword(char str[],char word[]);

int main()

{
   
	 char str[100],word[100];
 
         printf("Enter the string\n");
  
         scanf("%[^\n]%*c",str);
  
         printf("Enter the word\n");
    
         scanf("%[^\n]%*c",word);
     
    removeword(str,word);
 
         printf("string after removed the word:-\n%s",str);
     
    return 0;

}

char* removeword(char str[],char word[])

{  
   
	 int i=0,j=0,k;
 
         for(i=0;i<strlen(str);i++) 
     
    {
        
		while(str[i]==word[j] && word[j]!='\0') //to search the word in string

	        {
           
			 for(k=i;str[k]!='\0';k++)
 
                         {
                
				str[k]=str[k+1]; //to override the word by next words
  
	                 }
        
                         j++;
        
        }
     
    }

         return str;

}


