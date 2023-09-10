#include <stdio.h>

int main() {
   int i,j,n,l,s;
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
           printf(" ");
       }
       for(j=0;j<2*n-2*l;j++)
       {
           printf("*");
       }
       printf("\n");
   }
   
    return 0;
}