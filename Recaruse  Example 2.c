#include<stdio.h>

 int calcupercentage(int scincen, int math, int sanskrit);

int main()
{
   int sc = 98;
   int math = 95;
   int sanskrit = 99;

   printf(" Perctange is : %d",calcupercentage(sc, math, sanskrit));
   return 0;
}
   int calcupercentage(int scincen, int math, int sanskrit)
{
   int b;
   b = ((scincen + math + sanskrit)/3);
 
 return b ;
}