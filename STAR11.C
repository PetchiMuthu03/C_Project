#include <stdio.h>

int main() {
int i,j,n;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    if(i==j)
    {
        if(i<=n/2)
        {
            printf("%2d",n-i);
            
        }
        else
        {
            printf("%2d",i+1);
        }
    }
       
    else if(i+j==n-1)
    {
        if(i<=n)
        {
            printf("%2d",i+1);
        }
        else
        {
            printf("%2d",j+1);
        }
    }
    else
    {
        printf(" ");
    }
    printf("\n");
}
    return 0;
}