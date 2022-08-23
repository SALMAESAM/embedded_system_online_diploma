#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    float swap;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    swap=a;
    a=b;
    b=swap;
    printf("After swapping the value of a=%f\n",a);
    printf("After swapping the value of b=%f",b);
    return 0;
}
