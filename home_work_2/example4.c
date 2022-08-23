#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Enter the number:");
    scanf("%f",&x);
    if(x>0)

    {
        printf("%f is postive",x);

    }
    else if(x<0)
    {
        printf("%f is negative",x);

    }
    else
    {
        printf("you entered zero")  ;
    }
    return 0;
}
