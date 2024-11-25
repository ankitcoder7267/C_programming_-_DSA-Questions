#include<stdio.h>

int main()
{
    int marks[10], sum_of_marks = 0;
    int i;
    for( i = 0; i<10; i++)
    {
        printf("Enter the marks of student : %d \n",i+1);
        scanf("%d",&marks[i]);
    }
    for(i = 3; i < 8; i++)
    {
        sum_of_marks += marks[i];
    }

    printf("The sum of student from 4th student to 8th student is %d \n",sum_of_marks);

    return 0;
}