#include<stdio.h>

int main()
{
    int n1, n2 ;
    printf("Enter two number : ");
    scanf("%d %d", &n1, &n2);
    
    switch(n1 > n2)
    {
        case 0 : printf("%d is largest number : ", n2);
        break;
        
        case 1 : printf("%d is largest number : ", n1);
        break;
        
        default : printf("both numbers equal");
    }

}