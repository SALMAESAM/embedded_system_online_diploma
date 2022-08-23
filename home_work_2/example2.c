#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a;
   printf("Enter an alphabet:");
   scanf("%c",&a);
   if(a=='a'||a=='i'||a=='e'||a=='o'||a=='u')
   {
       printf("%c is a vowel",a);
   }
   else
   {
       printf("%c is a consonant",a);
   }

    return 0;
}
