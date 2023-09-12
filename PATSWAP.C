#include <stdio.h>

int main() {
   int i,j,n,k;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
       for(j=1;j<n;j++)
       {
           k=i+j-1;
           if(k>4)
           {
               k=k-4;
           }
           printf("%2d",k);
       }
       printf("\n");
   }
    return 0;
}