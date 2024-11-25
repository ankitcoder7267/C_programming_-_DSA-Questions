#include<stdio.h>

 int addition(int *, int *, int *);

int main()
{
    int n1, n2, n3, *a, *b, *c, sum;   
    printf("Enter the three number : ");
    scanf("%d %d %d", &n1, &n2, &n3);    
    sum = addition(&n1, &n2, &n3);
    printf("Result : %d", sum);
     return 0;
}
 int addition(int *a, *b, *c)
 {
     int sum ;
     sum = *a + *b + *c ;
    return sum ;
 }