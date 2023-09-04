#include <stdio.h>

int main() {
   int i,j,n,k;
   printf("Enter the number:");
   scanf("%d",&n);
   k=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       if(i%2==0)
       {
           k++;
           printf("%d ",k);
          
       }
       else
       {
           printf("%d ",k);
           k--;
       }
       k=k+n;
       printf("\n");
   }
    return 0;
}