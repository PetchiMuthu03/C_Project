//Enter the n number of array and first 4 array value move to last.
#include <stdio.h>

int main() {
 int i,n,a[25];
 printf("Enter the number:");
 scanf("%d",&n);
 printf("Enter the array number:");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<4;i++)
 {
     a[i+n]=a[i];
     printf("a[%d]=%d\n",i+n,a[i]);
 }
 printf("first 4 array value move to last:");
 for(i=4;i<n+4;i++)
 {
     a[i-4]=a[i];
     printf("a[%d]=%d\n",i-4,a[i]);
 }
 for(i=0;i<n;i++)
 {
     printf("%d",a[i]);
 }
    return 0;
}