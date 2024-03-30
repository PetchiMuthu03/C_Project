#include<stdio.h>
#include<conio.h>
int sixone(int n)
{
    int i=0,j=0,asc=0,des=0,diff,c=6174;
   int arr[4],arr1[4],arr2[4],arr3[4];
   while(n>0){
       arr[i]=n%10;
       n=n/10;
       i++;
   }
   for(i=0;i<4;i++){
       printf("%d",arr[i]);
   }
   for(i=0;i<4;i++)
   {
       arr1[i]=arr[i];
       arr2[i]=arr[i];
   }

   printf("\n");
   printf("Descending order:");
   for(i=0;i<4;i++){
	for(j=i+1;j<4;j++)
	{
	    if(arr2[i]<arr2[j])
	    {
		int temp=arr2[i];
		arr2[i]=arr2[j];
		arr2[j]=temp;
	    }
	}
    }
    for(i=0;i<4;i++){
	printf("%d",arr2[i]);
    }
    printf("\n");


   printf("Acending order:");
   for(i=0;i<4;i++){
	for(j=i+1;j<4;j++){
	    if(arr1[i]>arr1[j])
	    {
		int temp=arr1[i];
		arr1[i]=arr1[j];
		arr1[j]=temp;
	    }
	}
    }
    for(i=0;i<4;i++){
	printf("%d",arr1[i]);
    }
   printf("\n");

for(i=0;i<4;i++)
    {
       asc=asc*10+arr1[i];
    }

    for(i=0;i<4;i++)
    {
       des=des*10+arr2[i];
    }

    diff=des-asc;
    printf("%d\n",diff);
    if(c==diff){
	printf("output:%d",diff);
    return diff;
    }
    printf("Call the function:");
    return sixone(diff);

}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    sixone(n);
    getch();
    return 0;
}