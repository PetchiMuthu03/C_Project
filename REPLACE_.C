#include <stdio.h>

int main() {
    int n,i,count,arr[10];
    printf("Enter the number:");
    scanf("%d",&n);
    i=0;
    count=0;
    while(n>0){
        arr[i]=n%10;
        n=n/10;
        i++;
        count++;
    }
    for(i=0;i<count;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=1;
        }
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}