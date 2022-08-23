#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[100],a;
    int i,counter=0;
    printf("Enter a string:");
    gets(text);
    printf("Enter the character to fund a frequency:");
    scanf("%c",&a);

    for(i=0;text[i]!=0;i++)
    {
        if(a==text[i])
            ++counter;
    }
        printf("Frequency of %c=%d",a,counter);

    return 0;
}
