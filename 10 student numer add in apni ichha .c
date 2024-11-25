#include<stdio.h>

int main()
{
    int marks[10], sum_of_marks = 0;
    int i;
    int initial, final;

    for(int i = 0; i<10; i++)
    {
        printf(" \n Enter the marks of student %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    {
        printf(" \n Enter initial : ");
        scanf("%d",&initial );
    }
    {
        printf(" \n Enter final value : ");
        scanf("%d",&final);
    }
    for(i = initial-1; i < final; i++)
    {
        sum_of_marks += marks[i];
    }

    printf("The sum of student initial student to final student is %d \n",sum_of_marks);

    return 0;
}