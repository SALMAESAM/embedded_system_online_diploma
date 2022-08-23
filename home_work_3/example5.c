#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,n,element;
    printf("Enter no of element :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched:" );
    scanf("%d",&element);

    for(i=0;i<n&&element!=a[i];i++)
    {

    }
        if(i<n)
    {
        printf("number found at locaion =%d",i+1);
    }
    else
    {
        printf("Number not found");
    }
    return 0;
}
