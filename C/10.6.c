#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],fl[1001];
    scanf("%s ",str);
    while(*str!='#')
    {
        gets(fl);
        int n=0;
        int len1=strlen(str);
        int len2=strlen(fl);
        for(int i=0;i<len1;i++)
        {
            if(str[i]==*fl)
            {
                int flag=0;
                for(int j=0;j<len2;j++)
                {
                    if(str[i+j]==fl[j])
                        flag++;
                    else break;
                }
                if(flag==len2)
                {
                    n++;
                    i+=len2-1;
                }
            }
        }
        printf("%d\n",n);
        memset(str,0,1001);
        memset(fl,0,1001);
        scanf("%s ",str);
    }
    return 0;
}