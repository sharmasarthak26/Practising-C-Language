#include <stdio.h>

#define LOWER 0

#define UPPER 300

#define STEP 20

void farenheittocel(float fa,float cel);

void celsiustofaren(float fa,float cel);


int main( )

{
  
	float fahr,celsius;

        int c;

        c  = getchar();

        if(c == '1')

            farenheittocel(fahr,celsius);

        else if(c == '2')
 
            celsiustofaren(fahr,celsius);
    
    else
 
            printf("invalid command");

    
        return 0;

}

void farenheittocel(float fa, float cel)

{

    fa = LOWER;

    while(fa<=UPPER)
 
    {
      
          cel = 5 * (fa - 32.0) / 9.0;
 
          printf("%3.0f %6.2f\n",fa,cel);
  
          fa = fa + STEP;
   
    } 

}

void celsiustofaren(float fa, float cel)

{
  
    for(cel = LOWER; cel<=UPPER; cel += STEP)
 
    {
  
          fa = ((9.0 / 5.0)* cel  + 32.0);
 
          printf("%3.0f %6.2f\n",cel,fa);
 
    }

}
