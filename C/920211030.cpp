#include<stdio.h>
#include<math.h>
int xznum(int);
int main(){
    int a,b,ans=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        ans+=xznum(i);
    }
    printf("%d",ans);
    return 0;
}
int xznum(int n)
{
    int lg,is=0;
    lg=log10(n);
    for(int i=0;i<=lg;i++)
    {
        is+=pow(10,i);
    }
    if(n%is)
        return 0;
    return 1;
}