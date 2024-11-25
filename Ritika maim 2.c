#include<stdio.h>

  int multiplication(int,int);

int main()
{
    int a, b, multiple ;
    a = 3, b = 4 ;
    
    multiple = multiplication(a,b);
    
    printf(" a & b multiple = %d ",multiple);

  return 0 ;
}
  
  int multiplication(int a , int b)
{
  int multiple ;
  multiple = a * b ;
  return multiple;
    
}