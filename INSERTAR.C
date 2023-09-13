#include <stdio.h>

int main() {
    int n,i,arr[25],a,b;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements are:");
    for(i=0;i<n;i++)
    {
        printf("%2d",arr[i]);
    }
    printf("\nEnter the indexed:");
    scanf("%d",&a);
    printf("\nEnter the insert value:");
    scanf("%d",&b);
    for(i=n+1;i>a;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[a]=b;
    printf("The element to be inserted:");
    for(i=0;i<=n;i++)
    {
        printf("%2d",arr[i]);
    }
    return 0;
}