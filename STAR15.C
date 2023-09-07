#include <stdio.h>

int main() {
  int i,j,n;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      if(i<=n/2-1)
      {
      
      if(j==0||j==n-1||i+j==2*i||i+j==n-1)
      {
          printf("* ");
      }
      else
      {
          printf("  ");
      }
      }
      else
      {
          if(j==0||j==n-1)
          {
              printf("* ");
          }
          else
          {
              printf("  ");
          }
      }
      printf("\n");
  }
    return 0;
}