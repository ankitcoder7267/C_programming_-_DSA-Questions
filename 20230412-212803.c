#include<stdio.h>

int main()
{
     char g ;
    printf("enter character : ");
    scanf("%c", &g);

    if(g == 'A')
    {
        printf("90 - 100");
    }
    else if(g == 'B')
    {
        printf("80 - 90");
    }
    else if(g == 'C')
    {
        printf("70 - 80");
    }
    else if(g == 'D')
    {
        printf("60 - 70");
    }
    else if(g == 'E')
    {
        printf("50 - 60");
    }
    else 
    {
        printf("Fail");
    }
    return 0;
}
    