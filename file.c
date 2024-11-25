#include<stdio.h>

int main()
{
    FILE *fptr ;
    fptr = fopen("Student.txt", "w") ;
    
    char name[10];
    int age;
    float marks;
    
    printf("Enter student name : ");
    scanf(" %s", name);
    
    printf("Enter student age : ");
    scanf(" %d", &age);
    
    printf("Enter student marks : ");
    scanf(" %f", &marks);
    
    fprintf(fptr, "%c", name);
    fprintf(fptr, "%d", age);
    fprintf(fptr, "%f", marks);
    
    fclose(fptr);
    return 0;
}