#include <stdio.h>
#include<conio.h>

int main() {
    int i,n,j,mid;
    printf("Enter the number:");
    scanf("%d",&n);
    clrscr();
    mid=(n/2)+1;
    for(i=1;i<=n;i++)
    {
	for(j=1;j<=n;j++)
	if(i==mid||j==mid||(j==n&&i>=mid)||(j==1&&i<=mid)||(i==1&&j>=mid)||(i==n&&j<=mid))
	{
	    printf("*");
	}
	else
	{
		    printf(" ");
	}
	printf("\n");
    }
    getch();
    return 0;
}