#include<stdio.h>

 // function declaration 
 float convertTemp(float Celsius);

int main()
{
    // function calling 
   float far = convertTemp(87);
    printf("far : %f", far);
    return 0;
}

    //function definition 
 float convertTemp(float Celsius)
{
     float far = Celsius * (9.0/5.0) + 32 ;
     return far ;
}