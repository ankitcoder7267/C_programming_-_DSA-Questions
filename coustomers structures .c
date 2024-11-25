#include <stdio.h>

struct coustomers 
{
    int id;
    char name[20];
    float balance;
};

void cus1(struct coustomers record);

int main ()
{
    struct coustomers record ;
    record.id = 1;
    strcpy(record.name,"Sachin")  ;
    record.balance = 99.0;

    cus1(record);
    return 0;
}

void cus1(struct coustomers record)
{
    printf(" Id : %d \n",record.id);
    printf(" Name : %s \n",record.name);
    printf(" Balance : %f \n",record.balance);

}