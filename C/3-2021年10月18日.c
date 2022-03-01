#include<stdio.h>
int main()
{
    const int H=100;
    float h=H,ans=0;
    for(int i=1;i<=10;i++)
    {
        ans+=h;
        h/=2;
        ans+=h;
    }
    printf("%.3f %.3f",ans-h,h);
    return 0;
}