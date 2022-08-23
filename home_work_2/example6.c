#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,x;
    int i;
    printf("Enter an intger :");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}
