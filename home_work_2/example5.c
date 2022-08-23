#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;

    printf("Enter a character:");
    scanf("%c",&a);
    if(a>=65&&a<=90||a>=97&&a<=122)
    {
        printf("%c is an alphabet");

    }
    else
    {
        printf("%c is not an alphabet" );
    }

    return 0;
}
