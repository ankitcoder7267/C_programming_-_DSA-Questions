/* Array ko read & display ka program */

#include<stdio.h>

int main ()
{
    int array[3][4] ;
    int i,j ;
    printf("Enter array value : ");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d \t", &array[i][j]);
        }
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d \t", array[i][j]);
        }
        printf("\n");    
    }
    
    return 0;
}