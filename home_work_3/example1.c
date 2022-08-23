#include <stdio.h>
#include <stdlib.h>


int main()
{
    float a[2][2],b[2][2],c[2][2];
    int i,z;
    printf("Enter the element of 1st matrix\n");


    for(i=0;i<2;++i)
    {
        for(z=0;z<2;++z)
        {
            printf("Enter a %d%d:",i+1,z+1);
            scanf("%f",&a[i][z]);
        }
    }
    printf("Enter the element of 2nd matrix\n");


    for(i=0;i<2;++i)
    {
        for(z=0;z<2;++z){
        printf("Enter b%d%d:",i+1,z+1);
            scanf("%f",&b[i][z]);
        }
    }



    for(i=0;i<2;++i)
    {
        for(z=0;z<2;++z){
          c[i][z]=a[i][z]+b[i][z];}
    }
    printf(" \n sum  of matrix:\n");
    for(i=0;i<2;++i)
    {
        for(z=0;z<2;++z){
            printf("%f\t",c[i][z]);
            if(z==1)
                printf("\n");
        }
    }
    return 0;

}

