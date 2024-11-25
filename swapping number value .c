#include <stdio.h>

int main()
{
    int a, b, change ;
    printf("Enter value a : ");
    scanf("%d",&a);

    printf("Enter value b : ");
    scanf("%d", &b);

    change = a ;
    a = b ;
    b = change ;

    printf("After swapping : a = %d, b = %d", a,b);
    return 0;
}