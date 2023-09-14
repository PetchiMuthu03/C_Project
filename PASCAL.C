#include <stdio.h>

int main() {
   int i,j,n,a[20][20],s;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(s=0;s<n-i-1;s++)
       {
           printf(" ");
       }
       for(j=0;j<=i;j++)
       {
           if(j==0||i==j)
           {
               a[i][j]=1;
               printf("%2d",a[i][j]);
           }
           else
           {
               a[i][j]=a[i-1][j-1]+a[i-1][j];
               printf("%2d",a[i][j]);
           }
       }
       printf("\n");
   }
    return 0;
}