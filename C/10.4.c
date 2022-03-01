#include<stdio.h>
#include<string.h>
int main()
{
    char str[81];
    gets(str);
    int n=strlen(str);
    int maxnum=0,maxlen=0;
    int count=0;
    for(int i=0;i<=n;i++)
    {
        
        if(str[i]!=' '&&str[i]!=0)//到'\0'的时候也应该判断
        {
            count++;
        }
        else
        {
            if(maxlen<count)
            {
                maxlen=count;
                maxnum=i-count;
            }
            // if(str[i]==0)
            //     maxnum+=2;
            count=0;
        }
    }
    for(int i=maxnum;i<maxnum+maxlen;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
//01 4561560
//0123456789