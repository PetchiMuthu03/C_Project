#include <stdio.h>

int main() {
   int i=0,count=0,dec,n,arr1[10];
   printf("Enter the decimal number:");
   scanf("%d",&n);
   while(n>0)
   {
       arr1[i]=n%2;
       n=n/2;
       i++;
   }
   
   for(int j=i-1;j>=0;j--)
   {
       printf("%d",arr1[j]);
   }
    return 0;
}
