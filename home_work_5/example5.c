#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define area(r) pi*r*r

int main()
{
    int radios ;
    float area;
    printf("Enter the radios");
    scanf("%d",&radios);
    area =area(radios);
    printf("Area=%0.2f",area);
    return 0;
}
