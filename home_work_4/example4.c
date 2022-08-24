#include <stdio.h>
#include <stdlib.h>
int power (int n1,int n2);
int main()
{
  int n,p;
  printf("Enter base number : ");
  scanf("%d",&n);
  printf("Enter power number:" );
  scanf("%d",&p);
  printf("%d ^ %d=%d",n,p,power(n,p));

    return 0;
}
int power (int n,int p)
{
            if(p!=0)
                return(n*power(n,p-1));
            else
                return 1;
}
