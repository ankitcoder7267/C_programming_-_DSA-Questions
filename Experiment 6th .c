#include<stdio.h>

int main() 
{

    int numbers[4][5];
    int i, j;  
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Enter numbers : ");  
            scanf("%d", &numbers[i][j] );
        }
        printf("\n");
    }
    {
        printf(" Every numbers multiplication in 7, That is print new number \n");
    }
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d \t", numbers[i][j]*7);
        }
        printf("\n");
            }
        return 0;
}