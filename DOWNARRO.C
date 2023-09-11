#include <stdio.h>

int main() {
   int i,j,n,s,k;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       k=i+1;
       for(j=0;j<i+1;j++)
       {
           printf("%d",k--);
       }
       for(s=0;s<n-i-1;s++)
       {
           printf(" ");
       }
       for(s=0;s<n-i-1;s++)
       {
           printf(" ");
       }
       k=1;
       for(j=0;j<i+1;j++)
       {
           printf("%d",k++);
       }
       printf("\n");
   }
    return 0;
}