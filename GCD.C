#include <stdio.h>
void gcd(int a,int b);
void main() {
    int a,b;
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    gcd(a,b);
}
void gcd(int a,int b)
{
    int i=1,gcd;
   if(a>b){
       while(i<a)
       {
           if(a%i==0)
           {
               gcd=i;
           }
           i++;
       }
   }
   else
   {
       while(i<b)
       {
           if(b%i==0)
           {
               gcd=i;
           }
           i++;
       }
   }
   printf("gcd is:%d",gcd);
}