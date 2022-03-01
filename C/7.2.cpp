#include<cstdio>
int ipt(int);
int main()
{
    int n;
    scanf("%d",&n);
    ipt(n);
    return 0;
}
int ipt(int n)
{
    if(n<=0)
    return 3 ;
    int m;
    scanf("%d",&m);
    ipt(m);
    printf("%d ",n);
}
