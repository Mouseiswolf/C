#include<stdio.h>
int main()
{
    char s;
    int a,b,i,n,sum=0;
    scanf("%d",&n);    
    for(i=1;i<=n;i++)
    {
        scanf("%c %d %d",&s,&a,&b);
        if(s=='+')
        {
            sum+=a*b;
        }
        if(s=='-')
            sum-=a*b;
    }
    printf("%d",sum);
    return 0;
}