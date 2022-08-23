#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter three numbers");
    scanf("%f %f  %f",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        printf("a is the largest number");

    }
    else if(b>=a&&b>=c)
    {
        printf("b is the largest number");

    }
    else

    {
        printf("c is the largest number");
    }


    return 0;
}
