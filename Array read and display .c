/* Array ko read & display ka program */

#include<stdio.h>

int main ()
{
    int a[85], m, p;
    printf("Numbers of Element : ");
    scanf("%d", &m);
    
    printf("\n Enter the Element : \n");
    
    for(p = 0; p <= m - 1; p++)
    {
        scanf("%d", &a[p]);
    }
    printf("\n Elements are : \n");
    for(p = 0; p <= m - 1; p++)
    {
        printf("\n %d",a[p]);
    }    
    return 0;
}