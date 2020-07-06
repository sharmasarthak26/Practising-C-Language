Write a C program to check perfect number or not.

E:-  enter the number: 24
     24 is a perfect number.

C Program:-

#include<stdio.h>

void checkperfectRnot(int num)

{
	
	int temp =0,i;

 	for(i =1;i<num;i++)

	{
		
		if(num%i == 0)

		temp += i;
    
    }
    
        if(temp == num)

		printf("%d is a perfect number",num);
	
        else
		
                printf("%d is not a perfect perfect number",num);

}

int main( )

{
	
	int num;

	scanf("%d",&num);

	checkperfectRnot(num);
  
        return 0;

}


