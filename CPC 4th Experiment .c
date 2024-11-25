#include<stdio.h>

int main()
{
    int n ;
    printf("enter number : ");    
    scanf("%d", &n);
    
    int i = 1;
    while (i<=10) 
    {
        printf("%d \t",n*i);
       
        if(n*i % 2 == 0)
        {
            printf("even \n");
        }
        else
        {
            printf("odd \n");
        }
        i++;
    }
    return 0;
}
        