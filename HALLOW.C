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
        for(j=0;j<i+1;j++)
        if(j==0||i==n-1||i==j)
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
Enter the number:5
    * 
   * * 
  *   * 
 *     * 
* * * * * 