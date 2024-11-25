#include <stdio.h>

 float convertTemp(float celsius);

 int  main()

{
    float c;
    printf(" Enter the celsius value : ");
    scanf(" %f ",&c);
    float far = convertTemp(c);
    printf(" fareheight value %f: ", far);

    return 0;
}

    float convertTemp( float celsius) {
    
    float far = celsius * (9.0/5.0) + 32 ;
       
    return far ;
    }
    