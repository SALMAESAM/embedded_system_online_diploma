#include <stdio.h>
#include <stdlib.h>
int factoril(int n);
int main()
{
  int n,i;
   printf("Enter an+ integer:",n);
   scanf("%d",&n);
   printf("factorial of %d=%ld",n,factoril(n));
    return 0;
}
int factoril(int n)
{


int i,fact=1;
for(i=n;i!=0;i--)
{
   fact*=i;
}

return fact;
}
