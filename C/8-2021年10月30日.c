#include<stdio.h>
int main()
{
    int n,i=1,j=1,space;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        space=2*(n-i);
        for(int k=1;k<=space;k++)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
            if(j<i)
            {
                printf("+");
            }
        }
        printf("=");
        for(j=i;j>=1;j--)
        {
           printf("%d",j);
            if(j>1)
            {
                printf("+");
            } 
        }
        printf("\n");
    }
    return 0;
}