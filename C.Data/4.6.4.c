#include<stdio.h>
int main()
{
    int i,j,n;
    printf("111(1<n<=30):\n ");
    scanf("%d",&n);
    for (i =1;i<=n;i++)
    {
        for (j=1;j<=41-i;j++)
        {
            printf(" ");
        }  
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}