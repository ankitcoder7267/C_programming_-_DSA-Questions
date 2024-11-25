#include <stdio.h>

// function declaration
int minimum(int, int );


int main()
{
    int num1, num2;

    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    
    printf("The smaller number is %d",num1,num2);

    return 0;
}


    // function definition
    int maximum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}