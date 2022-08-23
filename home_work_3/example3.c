#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,colum,i,j,a[10][10],trans[10][10];
    printf("Enter rows and colums of matrix:");
    scanf("%d%d",&row,&colum);
    printf("\nEnter elements of matrix\n");
    for(i=0;i<row;++i)
        for(j=0;j<colum;j++)
    {
        printf("Enter element of a %d%d\n",i+1,j+1);
        scanf("%d",&a[i][j]);
    }

    printf("Entered natrix:\n");
    for(i=0;i<row;i++)
        for(j=0;j<colum;j++)
    {
        printf("%d",a[i][j]);
        if(j==colum-1)
            printf("\n\n");

    }

    for(i=0;i<row;++i)
        for(j=0;j<colum;++j)
    {
        trans[j][i]=a[i][j];
    }
    printf("\n Transpose of matrix \n");
    for(i=0;i<colum;i++)
        for(j=0;j<row;j++)
    {
        printf("%d",trans[i][j]);
        if(j==row-1)
            printf("\n\n");
    }

    return 0;
}
