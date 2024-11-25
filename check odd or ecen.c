      /*     #include<stdio.h>
#include<string.h>

struct customer 
{
    char name[20];
    int id ;
    float balance ;
};

void cus1 (struct customer record);

int main ()""
{
    struct coustomer_record ;
    record.id = 1;
    strcpy(record.name,"Sachin");
    record.balance = 9999.0;
    
    cus1(record);
    
    return 0;
}
 void cus1(struct customer record)
{
    printf("Id :  %d \n",record.id);
    printf("Name :  %d \n",record.name);
    printf("Balance :  %f \n",record.blance);
}    */

#include <stdio.h> 

int mux (int *m);

void main()
{
    int p = 3;
    printf("\n value of 'p before the calling function is = %d",p);
 
    mux(&p);
    printf("\n value of 'p' after calling the function is = %d", p);
}
    int mux (int *m)
{
    *m = *m * 18;
    printf("\n value of 'p' in the called function is = %d", m);
}