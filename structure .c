#include <stdio.h>
/*struct employee
{
    int emp_id;
    char emp_name[40];
    char emp_gender;
    char emp_designation[20];
};
void display(struct employee emp)
{
    printf("Emp_id : %d \n",emp.emp_id );
;    printf("Emp_name : %s \n",emp.emp_name );
    printf("Emp_gender : %c \n",emp.emp_gender );
    printf("Emp_designation : %s \n",emp.emp_designation );
}
int main()
{
    struct  employee emp1 = {141,"Ashish",'M',"Lecturer"};
    struct employee  emp2 = {123,"Lakshmi Chand ",'M',"Lecturer"};
    struct employee emp3 = { .emp_name = "Saurav", .emp_gender = 'M', .emp_id = 132,
        .emp_designation = "Lecturer"
    };
    
    emp2 = emp3;
    
    printf("Emp1 : \n");
    display(emp1);
    
    printf("Emp2 : \n");
    display(emp2);
    
    printf("Emp3 : \n");
    
    display(emp3);
    
    return 0;
}*/

struct student 
{
    int emp_id ;
    char emp_name[20] ;    
    char emp_gender ;
    char emp_designation[20] ;
};

void display(struct student emp);

int main ()
{
    struct student emp1 = {141,"Sachin",'M',"Student"},emp2;
    struct student emp3 = {132,"Ankit",'M',"Class cr"};
    
    emp2 = emp3;
    
    printf(" \n Student1 : \n");
    display(emp1);
    
    printf(" \n Student2 : \n ");
    display(emp2);
    
    printf(" \n Student3 : \n ");
    display(emp3);
    
    return 0;
}

void display(struct student emp)
{
    printf("Student_id = %d \n",emp.emp_id);
    printf("Student_name = %s \n",emp.emp_name);
    printf("Student_gender = %c \n",emp.emp_gender);
    printf("Student_designation = %s \n",emp.emp_designation);
}
    