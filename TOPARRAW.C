#include <stdio.h>

int main() {
   int i,j,n,s,k;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       k=1;
       for(j=0;j<n-i;j++)
       {
           printf("%d",k++);
       }
       for(s=0;s<n-j;s++)
       {
           printf(" ");
       }
       for(s=0;s<i;s++)
       {
           printf(" ");
       }
       k=5;
       for(j=0;j<n-i;j++)
       {
           printf("%d",k--);
       }
       printf("\n");
   }
    return 0;
}