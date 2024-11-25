/* Array me Element ko delete karne ka program */

#include<stdio.h>

int main ()
{
    int a[85], m, i, p;
    printf("Numbers of Element : ");
    scanf("%d", &m);
    
    for(i = 0; i <= m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the location for deletion \n");
    
    scanf("%d", &p);
    if(p >= m + 1)
    {
        printf("Deletion not possible \n");
    }
    else 
    {
        for( i = p -1; i <= m-1; i++)
        a[i] = a[i+1];
        
    printf("Result is \n");
    for(i = 0; i <= m - 1; i++)
    {
        printf("%d \n",a[i]);
    }    
    }
    return 0;
}