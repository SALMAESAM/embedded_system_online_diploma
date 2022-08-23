#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,i;
    int factorial=1;
    printf("Enter an intger :");
    scanf("%d",&x);
    if(x<=0)
    {
        printf("Erorr!!!Factorial of negative number doesn’t exist");
    }
    if(x>0)
    {
        for(i=1;i<=x;i++)
            factorial*=i;
    }
    printf("factorial=%d",factorial);







    return 0;
}
