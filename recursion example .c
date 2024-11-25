#include<stdio.h>

 float convertTemp(float Celsius);

int main()
{
   float far = convertTemp(37);
    printf("far : %f", far);
    return 0;
}

 float convertTemp(float Celsius)
{
 float far = Celsius * (9.0/5.0) + 32 ;
 return far ;
}