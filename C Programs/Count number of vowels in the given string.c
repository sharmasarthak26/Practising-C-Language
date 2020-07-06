Write a C program to count number of vowels in the given string.

Ex:-  Enter the string
      My name is Manikumar
      VOwels count in a given string: 7

C Program:-

#include<stdio.h>

int vowels_count(char s[]);

int check_vowel(char);

int main( )

{    
	
	char string[100];

	printf("Enter the string:");

	scanf("%[^\n]*%c",string);

	int c;
	
        c = vowels_count(string);

	printf("Vowels count in a given string:%d",c);

	return 0;

}

int vowels_count(char s[])

{
	
	int i = 0,count = 0,flag = 0;

	char a;
	
	do
	
        {
	
         	a = (char) s[i];

		flag = check_vowel(a);
	
	
	if(flag == 1)
	
		count++;
	
         	i++;

	}while(a!='\0');

        return count;

}

int check_vowel(char ch)

{
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')

        return 1;

	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

        return 1;

} 


