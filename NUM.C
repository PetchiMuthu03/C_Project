#include <stdio.h>

int main() {
   int i,j,n,c,s;
   printf("Enter the number:");
   scanf("%d",&n);
   c=0;
   for(i=0;i<n;i++)
   {
       for(s=0;s<n-i-1;s++)
       {
           printf(" ");
       }
       for(j=0;j<(2*i+1);j++)
       {
           if(j<i||i==j)
           {
               
               c++;
           }
           
           else{
               c--;
               
           }
           printf("%d ",c);
       }
       printf("\n");
   }
    return 0;
}