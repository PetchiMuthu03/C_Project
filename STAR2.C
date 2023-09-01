#include <stdio.h>
#include<conio.h>

int main() {
    int i,j,l,n,s;
    printf("Enter the number:");
    scanf("%d",&n);
    clrscr();
    for(i=-n;i<n;i++)
    {
	if(i<0)
	{
	    l=-(i);
	}
	else
	{
	    l=i;
	}
	for(s=0;s<n-l+1;s++)
	{
	    printf(" ");
	}
	for(j=0;j<l+1;j++)
	{
	    printf("* ");
	}
	printf("\n");
    }
    getch();
    return 0;
}