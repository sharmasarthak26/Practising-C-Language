/* C program to convert decimal to binary conversion */



#include<stdio.h>

int main( )

{
   
     int decimal;
 
    printf("Enter the decimal no:");

     scanf("%d",&decimal);

     int binary = 0;

     int weight = 1;
 
    while(decimal!= 0)
 
     {
     
          int rem = decimal % 2;
  
          binary = binary + rem * weight;
  
        decimal /= 2;
      
          weight *= 10;
 
    }
 
    printf("binary value is %d",binary);
 
     return 0;

}




/* C program to convert binary to decimal conversion */



#include<stdio.h>

int main( )

{

     int binary;
 
     printf("Enter the binary no:");

     scanf("%d",&binary);
   
     int decimal = 0;

     int weight = 1;
 
     while(binary != 0)
 
    {
      
         int rem = binary % 10;
 
         decimal = decimal + rem * weight;
  
         binary /= 10;
      
         weight *= 2;
   
    
 }

     printf("decimal value is %d",decimal);
 
     return 0;

}



