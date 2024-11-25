#include<stdio.h>

 void doWork(int, int, int *sum, int *multiple, int *subscate, int *average);

 int main ()
{
    int a, b;
    printf("Enter two number :- ");
    scanf("%d %d", &a, &b);
    
    int sum, multiple, subscate, average ;
    doWork(a,b, &sum, &multiple, &subscate, &average);
    
    printf("Sum = %d \n multiple = %d \n subscate = %d \n average = %d \n", sum, multiple, subscate, average);
    return 0;    
}

 void doWork(int a, b, int *sum,  int *multiple, int *subscate, int *average)

{
    *sum = a + b;
    *multiple = a * b;
    *subscate = a - b;
    *average = (a+b) / 2;
    
}
    
    