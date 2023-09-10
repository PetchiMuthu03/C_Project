#include <stdio.h>

int main() {
    int i,j,n,k=1,m=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        if(i%2==0&&j%2==0||(i+j)%2==0)
        {
            printf("%d",k);
        }
        else
        {
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}