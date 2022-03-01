#include<stdio.h>
#include<string.h>
int main()
{
    char str[81]={0};
    gets(str);
    int len=strlen(str);
    char *p=str+len-1;
    for(p;p>=str;p--)
        printf("%c",*p);
    return 0;
}