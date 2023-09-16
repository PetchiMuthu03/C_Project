#include <stdio.h>
int main() {
    int n,rem,arr[10],i,bin=0;
    printf("Enter the decimal number:");
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        rem=n%2;
        arr[i]=rem;
        bin++;
        n=n/2;
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
    printf("%d",arr[i]);
    }
    return 0;
}