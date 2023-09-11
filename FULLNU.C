#include <stdio.h>

int main() {
  int i,j,n,l,s,k;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=-n+1;i<n;i++)
  {
      if(i<0)
      {
          l=-(i);
      }
      else
      {
          l=i;
      }
      for(s=0;s<l;s++)
      {
          printf("  ");
      }
      k=1;
      for(j=0;j<n-l;j++)
      {
          printf("%2d",k++);
      }
      k=1;
      for(j=0;j<n-l;j++)
      {
          printf("%2d",k++);
      }
      printf("\n");
  }
    return 0;
}