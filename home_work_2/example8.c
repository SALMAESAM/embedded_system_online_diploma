#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    float a,b;
    printf("Enter operater either +or - or / or * ");
    scanf("%c",&x);

    printf("Enter two oprened:");
    scanf("%f%f",&a,&b);
    switch(x)
    {
case('+'):
    {

    printf("%f +%f=%f ",a,b,a+b);
    break;
    }
    case('-'):
        {


    printf("%f-%f=%f",a,b,a-b);

    break;
        }
    case('/'):
    {


    printf("%f/%f=%f",a,b,a/b);
    break;
    }
    case('*'):

        {

    printf("%f*%f=%f",a,b,a*b);

    break;
    }
    }
    return 0;
}
