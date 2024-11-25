#include<stdio.h>

int add(int, int);

int main() 
{
    int a, b, d;
    printf("Enter first number : ");
    scanf("%d", &a);
    
    printf("Enter second number : ");
    scanf("%d", &b);
    
     d = add(a,b);
    
    printf("Result : %d", d);
    
        return 0;
}
 int add(int a, int b)
{
    int sum ;
    sum = a + b;
    return sum;
}

