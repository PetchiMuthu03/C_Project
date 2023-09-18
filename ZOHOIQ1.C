#include <stdio.h>

int main()
{
    int i,j,arr[10],n,k=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the array number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element accurs once in the given array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        if(arr[i]==arr[j])
        {
            k++;
            break;
        }
        else
        {
            k=0;
            break;
        }
        if(k==0)
        {
            printf("%d",arr[i]);
            
        }
    }
    return 0;
}