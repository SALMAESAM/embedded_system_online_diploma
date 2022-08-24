#include <stdio.h>
#include <stdlib.h>
void reverse();
int main()
{
    printf("Enter a sentance:");
    reverse();
    return 0;
}
void reverse()
{
    char h;
    scanf("%c",&h);
    if(h!='\n')
    {
        reverse();
        printf("%c",h);
    }

}
