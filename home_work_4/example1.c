#include <stdio.h>
#include <stdlib.h>
int prime(int num);
int main()
{
    int n1,n2,i,flag;
   printf("Enter two numbers(intervals)") ;
   scanf("%d%d",&n1,&n2);
   printf("prime number between %dand %d are :",n1,n2);

   for(i=n1+1;i<n2;i++)
   {
          flag =prime(i);

     if(flag==0)
        printf("%d",i);
   }

    return 0;
}
int prime(int num)
{

int j;
int flag=0;
for(j=2;j<=num/2;j++)
{


    if(num%j==0)
{
    flag=1;
    break;
}
}
return flag;
}
