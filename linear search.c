// Function Of Linear Search In C
#include<stdio.h>
#include <conio.h>
void main()
{
    int a[15] ,key , n , i , count=0;
    printf("\n enter the number of the elements = ");
    scanf ("%d",&n);
    printf("\n enter the elements in array = ");
    for (i=0; i<n; i++)
    {
    scanf ("%d",&a[i]);
    }
printf("\n enter the element thet you want to search = ");
scanf("%d", &key);
for(i=0 ; i<n ; i++)
{
    if (key==a[i])
    {
            printf("\n element element found at %d index ",i);
            count=count+1;
    }
}
        if(count==0)
            printf("\n element not found");
        getch();
}            