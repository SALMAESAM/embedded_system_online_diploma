#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10],n,i,element,location;
   printf("Enter no of element : ");
   scanf("%d",&n);
   for(i=0;i<n;++i)
   {
       scanf("%d",&a[i]);
   }
   printf("Enter a element to be insert: ");
   scanf("%d",&element);
   printf("Enter the location :");
   scanf("%d",&
         location);
   for(i=n;i>=location;--i)
   {
       a[i]=a[i-1];
   }
   n++;
   a[location -1]=element;
   for(i=0;i<n;i++)
    printf(" %d",a[i]);


    return 0;
}
