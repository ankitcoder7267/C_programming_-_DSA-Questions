#include<stdio.h>

 int multiplication(int *, int *);

int main ()
{
    int n1, n2, multiple;
    printf("Enter two number : ");
    scanf("%d %d", &n1, &n2);
    multiple = multiplication(&n1, &n2);
    printf("Result : %d",multiple);
    return 0;
}
  int multiplication(int *a, int *b)
  {
      int multiple ;
      multiple = *a * *b;
      return multiple ;
  }