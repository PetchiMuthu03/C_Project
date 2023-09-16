#include <stdio.h>
#include<math.h>

int main() {
    int n,rem,dec=0,i;
    printf("Enter the binary number:");
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        rem=n%10;
        dec=dec+rem*pow(2,i);
        n=n/10;
        i++;
    }
    printf("Decimal number is:%d",dec);
    return 0;
}
output:
Enter the binary number:1111
Decimal number is:15
