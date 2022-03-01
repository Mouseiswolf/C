#include <stdio.h>
#include <string.h>
int isWord(char *buf);
int main()
{
    int t = 0;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        char str[1000] = {0};
        char buf[1000][1000] = {0};
        gets(str);
        
        int j = 0;
        int len=0;
        for(int num=0;str[num]!='\0';num++)
        {
            if(str[num]==' ')
            {
                j++;
                len=0;
            }
            else
            {
                buf[j][len]=str[num];
                len++;
            }
        }
        for (int k = 0; k <= j; k++)
        {
            if (isWord(buf[k]) == 0)
                continue;
            for (int l = k + 1; l <= j; l++)
            {
                if (isWord(buf[l]) == 0)
                    continue;
                if (strcmp(buf[k], buf[l]) > 0)
                {
                    char temp[1000];
                    strcpy(temp, buf[k]);
                    strcpy(buf[k], buf[l]);
                    strcpy(buf[l], temp);
                }
            }
        }
        printf("case #%d:\n", i);
        for (int k = 0; k <= j; k++)
        {
            printf("%s", buf[k]);
            if (k < j )
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int isWord(char *buf)
{
    while (*buf != '\0')
    {
        if (*buf < 'A' || *buf > 'Z')
            return 0;
        buf++;
    }
    return 1;
}
