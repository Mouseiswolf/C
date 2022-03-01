#include<stdio.h>
int main()
{
    int a,b,max,min;
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;


    while (max>1)
    {
        if(a%max==0&&b%max==0)
            break;
        max--;
    }
    printf("最大公约数是: %d",max);
    return 0;
}