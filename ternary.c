#include<stdio.h>

int main()
{
    int age ;
    printf("enter age : ");
    scanf("%d", &age);
    
    age > 18 ? printf(" Graduation \n") : printf(" Not Graduation \n");
    
    return 0;
}