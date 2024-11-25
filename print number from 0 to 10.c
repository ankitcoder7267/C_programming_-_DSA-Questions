// WAP ro print number from 0 to 10
 

int main()
{
    int digit = 3;
    while(digit<=30)
    {
        printf("%d \n",digit);
        if(digit % 2 == 0)
        {
            printf("even \n");
        }
        else
        {
            printf("odd \n");
        }
        digit += 3;
    }
    return 0;
}