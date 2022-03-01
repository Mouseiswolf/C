#include <stdio.h>
#include <math.h>
int main()
{
    int line, n,row,space;
    char ch='A';
    scanf("%d",&n);
    line = 2 * n - 1;
    for(int i=1;i<=line;i++)
    {
        space=fabs(n-i);
        row=line-2*fabs(n-i);
        for(int j=1;i<=space;j++)
            printf(" ");
        for(int j=1;j<=row;j++)
        {
            printf("%c",ch);
        }
        ch+=1;
        printf("\n");
    }
    return 0;
}