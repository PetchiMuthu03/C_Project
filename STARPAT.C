#include <stdio.h>

int main() {
int i,j,n;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    if(i==n/2||j==n/2||i==j||i+j==n-1)
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
*       *       * 
  *     *     *   
    *   *   *     
      * * *       
* * * * * * * * * 
      * * *       
    *   *   *     
  *     *     *   
*       *       *
