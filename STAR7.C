#include <stdio.h>

int main() {
  int i,j,n,k;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=1;i<=2*n-1;i++)
  {
      if(i<=n)
      {
          k=n;
      for(j=1;j<=2*n-1;j++)
      {
          printf("%d",k);
          if(i>j)
          {
              k=k-1;
          }
          if((i+j)>=(2*n))
          {
              k=k+1;
          }
      }
      printf("\n");
      }
      else
      {
          k=n;
          for(j=1;j<=2*n-1;j++)
        {
              printf("%d",k);
              if(i+j<2*n)
              {
                  k=k-1;
              }
              if(i<=j)
              {
                  k=k+1;
              }
          }
          printf("\n");
      }
  }
  
    return 0;
}