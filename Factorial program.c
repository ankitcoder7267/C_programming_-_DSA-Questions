#include<stdio.h>

int fact(int n);     //function declaration 

int main ()
{
    printf("Sum is : %d",fact(8));  //function calling
    return 0;
}

int fact(int n) // function definition 
{
    if(n == 1) {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factNm = factNm1 * n;
    return factNm;
}