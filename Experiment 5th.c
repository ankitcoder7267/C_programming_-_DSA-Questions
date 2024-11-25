// WAP ro print table of 4
 
#include<stdio.h>

int main()
{
    int n ;
    int m = 0 ;
    
    printf("Enter number : ");
    scanf("%d", &n);
    do
    {
        m = (m * 10) + (n % 10);
        n = n / 10 ;
    }
    while(n > 0);
    
    printf("%d",m);
    return 0;
    
}