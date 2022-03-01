#include <stdio.h>
int main()
{
    int n,l,r,m;
    scanf("%d",&n);
    m=(n);
    for(l=1;l<m;l++)
    {
        for(r=1;r<=n;r++)
        {
            if(r==(m-l+1)||(r==m+l-1))
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    for(r=1;r<=n;r++)
    {
        printf("*");
        
    }
    return 0;
}
