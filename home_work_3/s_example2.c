#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,count=0;
    char a[100];
    printf("Enter a string :");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    { count ++;

    }

        printf("Length of string :%d",count);
    return 0;
}
