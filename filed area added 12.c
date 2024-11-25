#include<stdio.h>

int main() 
{

    int filed[3][4];
    int i, j;
    
    printf("Enter filed value 12 ; ");    
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
        scanf("%d", &filed[i][j] );
        }
    }
    {
        printf(" Every filed area added 1 unit taht is New filed value \n" );
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
        printf("%d \t", filed[i][j]+1);
        }
        printf("\n");
            }
        return 0;
}