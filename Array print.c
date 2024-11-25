#include<stdio.h>

int main() 
{

    int filed[3][4];
    int i, j;
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
        scanf("%d", &filed[i][j] );
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
        printf("%d \t", filed[i][j] );
        }
        printf("\n");
            }
        return 0;
}