#include <stdio.h>
#include <string.h>
int main()
{
    char ipt[1001];
    char *p = ipt;
    char str[1000][1000];
    int n;
    gets(ipt);
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        int len = 0;
        scanf("%d", &len);
        getchar();
        for (int j = 0; j < len; j++)
        {
            str[i][j] = *p++;
        }
        str[i][len] = '\0';
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                char temp[10000];
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}