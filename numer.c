#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enterthe number:");
    scanf("%d",&n);
    k=n;
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(i<=n/2)
            {
             if(j<=n/2)
             {
                 if(i>j)
                 {
                     printf("%d",k);
                     k--;
                 }
             }
             else
             {
               if(i+j>=2*n-2)
               {
                   printf("%d",k);
                   k++;
               }
             }
            }
            else{
                if(j<n/2)
                {
                   if(i+j<=2*n-2)
                   {
                       printf("%d",k);
                       k--;
                   }
                }
                else
                {
                    if(i<=j)
                    {
                        printf("%d",k);
                        k++;
                    }
                }
                
            }
        }
        printf("\n");
    }
    return 0;
}