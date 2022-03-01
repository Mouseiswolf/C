#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][101];
    int t;
    scanf("%d ",&t);
    for(int i=0;i<t;i++)
    {
        gets(str[i]);
        int len=strlen(str[i]);
        for(int j=0;j<len;j++)
            {
                if(str[i][j]=='Z')
                    str[i][j]='A';
                else
                str[i][j]++;
            }
        printf("case #%d: %s\n",i,str[i]);
    }
    return 0;
}