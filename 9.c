#include<stdio.h>

int main()
{
  int a,n,i,sum;
    printf("Enter a number\n");
    scanf("%d",&a);
    
    for (i=1;i<=n/2;i++)
    {
    if(n%i==0)
      sum+=i;
      }
      if (sum==n)
      printf("Perfect Number!!!\n");
      else 
      printf("Not Perfect!!!");

return 0;
}
