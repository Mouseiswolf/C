#include <stdio.h>
#include <stdlib.h>

int main()
{
        char s=0;
    int a=0,b=0,i=1,n=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%c ",&s);
        scanf("%d %d ",&a,&b);
        if(s=='+')
        {
            sum+=a*b;
        }
        if(s=='-')
            sum-=a*b;
        else
            printf("error");
    }
    printf("%d",sum);
    return 0;

}
