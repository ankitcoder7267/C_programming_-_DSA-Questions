#include<stdio.h>

int main() 
{

    int filed[4][5];
    int i, j;
    
    printf("Enter filed value 20 ; ");    
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
        scanf("%d", &filed[i][j] );
        }
    }
    {
        printf(" Every filed area added 1 unit taht is New filed value \n" );
    }
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
        printf("%d \t", filed[i][j]*7);
        }
        printf("\n");
            }
        return 0;
}