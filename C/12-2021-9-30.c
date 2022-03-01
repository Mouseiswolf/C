#include<stdio.h>
int main()
{
    int a,b,ans;
    char type;
    scanf("%d%c%d",&a,&type,&b);
    switch(type)
    {
        case '+':

            ans=a+b;
            break;
        case '-':

            ans=a-b;
            break;
        case '*':

            ans=a*b;
            break;
        case '/':

            ans=a/b;
            break;


    }
    printf("%d",ans);
    return 0;
}
