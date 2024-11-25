#include<stdio.h>

int add(int, int, int );

int main() 
{
    int a, b, c, d;
    printf("Enter first number : ");
    scanf("%d", &a);
    
    printf("Enter second number : ");
    scanf("%d", &b);
    
    printf("Enter third number : ");
    scanf("%d", &c);
    
     d = add(a,b,c);
    
    printf("Result : %d", d);
    
        return 0;
}
 int add(int a, int b, int c)
{
    int sum ;
    sum = a + b + c;
    return sum;
}

    