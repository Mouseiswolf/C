#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[2][82];
    memset(str,0,2*82);
    scanf("%s %s",str[0],str[1]);
    int len1=strlen(str[0]);
    int len2=strlen(str[1]);
    int len=len1<len2?len1:len2;
    int end=len1>len2?len1:len2;
    int num=len1>len2?0:1;
    char *p1=str[0],*p2=str[1];
    for(int i=0;i<len;i++)
    {
        printf("%c%c",*p1++,*p2++);
    }
    for(int i=len;i<end;i++)
    {
        printf("%c",str[num][i]);
    }
    return 0;
}
//Ê²Ã´sb´úÂë
