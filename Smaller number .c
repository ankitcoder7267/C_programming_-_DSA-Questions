#include<stdio.h>

int main()
{
    int x ;
    int y ;
    printf("enter two number : \n");  
    scanf("%d,%d", &x,&y);
  
    if(x>y)
    {
    printf("Smaller number is %d", x);
    }
    else 
    {
    printf("Smaller number is %d",y);
    }
    
    return 0;
}