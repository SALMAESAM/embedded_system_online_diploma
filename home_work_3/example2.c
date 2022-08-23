#include <stdio.h>
#include <stdlib.h>

int main()
{

   int n,i;
   float a[100],sum,aveg;
   printf("Enter the number of data:");
   scanf("%d",&n);

    for(i=0;i<n;++i)
    {
        printf("%d.Enter number:",i+1);
        scanf("%f",&a[i]);
        sum+=a[i];
     }

     aveg =sum/n;
     printf("Averge =%.2f",aveg);
    return 0;
}
