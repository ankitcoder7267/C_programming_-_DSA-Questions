#include<stdio.h>

int multiplication(int,int );

void main ()
{
    int a, b, multiple ;
    printf("Enter two number ; ");
    scanf("%d %d", &a, &b);
    
    multiple = multiplication(a,b);

    printf("%d",multiple) ;
}

    int multiplication(int m, int n)
{

    int multiple;
    multiple = m * n ;
    return multiple;
}