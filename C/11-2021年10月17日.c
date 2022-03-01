#include<stdio.h>
double jc(int x)
{
    double ans=1;
    for(int i=1;i<=x;i++)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==i)
                printf("%d\n",1);
            else
                printf("%.0f ",jc(i)/jc(i-j)/jc(j));
        }
    }

    return 0;
}
