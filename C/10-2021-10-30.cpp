#include<stdio.h>
#include<math.h>
void out(int i,int j)
{
    if(j*i>=10)
    printf(" %d * %d =\t%d",j,i,j*i);
    else
    printf(" %d * %d =\t%d",j,i,j*i);//应该使用制表符\t而不应该用条件判断
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            out(i,j);
            
        }
        printf("\n");
    }
    return 0;
}