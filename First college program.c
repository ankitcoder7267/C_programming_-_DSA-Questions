#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Please enter three number");
    scanf("%d %d %d", &x,&y,&z);

    if(x>y)
    {
        if(x>z)
        {
            printf("Greatest number is %d",x);
        }
        else
        {
            printf("Greatest number is %d",z);
        }
    }
    else
    {
        if(y>z)
        {
            printf("Greatest number is %d",y);
        }
        else
        {
            printf("Greatest number is %d",z);
        }
    }
    return 0;
}
