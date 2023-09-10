#include <stdio.h>

int main() {
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i>=j)
        {
            printf("%d",j);
        }
        else
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
output:
Enter the number:5
1****
12***
123**
1234*
12345
