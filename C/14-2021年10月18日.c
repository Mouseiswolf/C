#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n=0;
    scanf("%d+%d=%d",&a,&b,&c);
    for(n;;n++)
    {
        if(a*pow(10,n)+b==c)
        {
            printf("%d",n);
            break;
        }
        if(a+b*pow(10,n)==c)
        {
            printf("%d",-n);
            break;
        }
    }
    

    return 0;
}