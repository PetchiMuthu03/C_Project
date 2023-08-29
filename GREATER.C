#include<stdio.h>
void main()
{
int a,b;
printf("enter any value:\n");
scanf("%d",&a);
printf("enter the value:");
scanf("%d",&b);
clrscr();
if(a!=b)
{
if(a<b)
{
printf("a is greater");
}
if(b>a)
{
printf("b is greater");
}
else
{
printf("a and b are equal");
}
getch();
}
}