#include <stdio.h>

void main()

{

void Fahrenheit(float c);

float c;

printf("\nEnter the Temperature in Celsius : ");

scanf("%f", &c);

Fahrenheit(c);

}

void Fahrenheit(float c)

{

printf("\nThe Temperature %0.2f Celsius = %0.2f Fahrenheit.", c, ( 9 * c) / 5 + 32);

return;

}

