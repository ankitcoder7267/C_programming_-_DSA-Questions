#include<stdio.h>

struct student
{
    char fristname[20] ;
    char lastname[20] ;
    char SSN[10] ;
    float GPA ;
};

int main()
{
    struct student student_a;
    
    strcpy(student_a.fristname,"Sachin");
    strcpy(student_a.lastname,"Patel");
    strcpy(student_a.SSN,"1634418");
    student_a.GPA = 2004.52 ;
    
    printf("Frist Name : - %s\n", student_a.fristname);
    printf("Last Name : - %s\n", student_a.lastname);
    printf("SSN : - %s\n", student_a.SSN);
    printf("G P A : - %f", student_a.GPA);  
    
    return 0;
}
