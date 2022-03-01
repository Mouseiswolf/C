#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strcpy(char *dest, const char *src)
{
    // 在这里实现 strcpy
    char *d = dest;
    char *s = src;
    if (*s == '0')
        return NULL;
    while (*s != '\0')
    {
        *d++ = *s++;
    }
    *d=0;
    return dest;
}
int _strlen(const char *str)
{
    // 在这里实现 strlen
    char *p = str;
    int len = 0;
    while (*p++ != '\0')
        len++;
    return len;
}
int _strcmp(const char *lhs, const char *rhs)
{
    // 在这里实现 strcmp
    char *l = lhs, *r = rhs;
    while(*l!='\0'||*r!='\0')
    {
        if(*l<*r)
            return -1;
        else if(*l>*r)
            return 1;
        else
        {
            l++;
            r++;
        }
    }
    return 0;
}
char *_strcat(char *dest, const char *src)
{
    // 在这里实现 strcat
    int len1=strlen(dest);
    char *d=dest+len1;
    char *s=src;
    while(*s!='\0')
    {
        *d++=*s++;
    }
    *d=0;
    return dest;
}
char *_gets(char *str)
{
    // 在这里实现 从输入流读取一行字符串（可能包含空格）
    // 你可以不考虑 EOF 的问题
    char *s=str;
    while(*s!='\n')
    {
        scanf("%c",s);
        s++;
    }
    *s='\0';
    return str;
}

int main()
{
    char a[201], b[101], cmd[7];
    while (1)
    {
        _gets(cmd);
        if (_strcmp(cmd, "GETS") == 0)
        {
            puts(_gets(a));
        }
        else if (_strcmp(cmd, "STRCPY") == 0)
        {
            int offset;
            scanf("% d", &offset);
            getchar();
            _gets(b);
            _strcpy(a + offset, b);
            puts(a);
        }
        else if (_strcmp(cmd, "STRLEN") == 0)
        {
            printf("% d\n", _strlen(a));
        }
        else if (_strcmp(cmd, "STRCMP") == 0)
        {
            _gets(b);
            int result = _strcmp(a, b);
            printf("% d\n", result > 0 ? 1 : (result < 0 ? -1 : 0));
        }
        else if (_strcmp(cmd, "STRCAT") == 0)
        {
            _gets(b);
            puts(_strcat(a, b));
        }
        else
        {
            break;
        }
    }
    return 0;
}
