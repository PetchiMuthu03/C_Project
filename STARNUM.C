#include <stdio.h>

int main() {
   int i,j,n,s;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(s=0;s<n-i-1;s++)
       {
           printf(" ");
       }
       for(j=0;j<2*i+1;j++)
       if(j%2==0)
       {
           printf("%d",i+1);
       }
       else
       {
           printf("*");
       }
       printf("\n");
   }
    return 0;
}