#include <stdio.h>

int main() {
   int i,j,n,u,s;
   printf("Enter the number:");
   scanf("%d",&n);
   printf("Enter the j range value:");
   scanf("%d",&u);
   for(i=0;i<n;i++)
   {
       for(j=0;j<u;j++)
       if(i==0||j==0||i==n-1)
       {
           printf("* ");
       }
       else
       {
           printf("  ");
       }
       for(s=0;s<3;s++)
       {
           printf(" ");
       }
       for(j=0;j<u;j++)
       if(i<=n/2)
       {
           if(i==0||j==0||i==n/2)
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
               if(i==n-1||j==u-1)
               {
                   printf("* ");
               }
               else
               {
                   printf("  ");
               }
           }
       for(s=0;s<3;s++)
       {
           printf(" ");
       }
       for(j=0;j<u;j++)
       if(i==0||i==n-1||i==n/2||j==0)
       {
           printf("* ");
       }
       else
       {
           printf("  ");
       }
       printf("\n");
   }
    return 0;
}
output:
Enter the number:9
Enter the j range value:5
* * * * *    * * * * *    * * * * * 
*            *            *         
*            *            *         
*            *            *         
*            * * * * *    * * * * * 
*                    *    *         
*                    *    *         
*                    *    *         
* * * * *    * * * * *    * * * * * 
