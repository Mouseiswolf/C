#include<stdio.h>
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    while (n)
    {
        if(n%2)
            ans++;
        n/=2;
    }
    printf("%d",ans);
    return 0;
}