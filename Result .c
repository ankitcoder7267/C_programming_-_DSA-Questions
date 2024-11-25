#include<stdio.h>

 int calcupercentage(int Aplliedphy, int Aplliedmath, int Communication, int Td, int fcit);

int main()
{
   int Appliedphy = 22;
   int Appliedmath = 19;
   int Communication = 22;
   int Fcit = 19;
   int Td = 25;

   printf(" Perctange is : %d",calcupercentage(Appliedphy, Appliedmath, Communication, Fcit, Td));
   return 0;
}
   int calcupercentage(int Appliedphy, int Appliedmath, int Communication, int Fcit, int Td)
{
   int b;
   b = ((Appliedphy + Appliedmath + Communication + Fcit + Td)/6);
 
 return b ;
}