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
    double e=0;
    for(int i=0;i<=10000;i++)
    {
        e+=1/jc(i);
    }
    printf("%.6f",e);
    return 0;
}