#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,j=0,count=0,sum=0,a[20];
    char str[20],str1[20];
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    
    printf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str1[j]=str[i];
            j++;
        }
        else{
            count=str[i]-'0';
            sum=sum*10+count;
        }
    }
    for(i=0;i<sum;i++)
    {
        printf("%s",str1);
    }
  