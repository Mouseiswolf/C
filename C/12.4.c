#include <stdio.h>
#include <string.h>
#define MAX 81
char *strmcpy(char *t, char const *s,int m);
int main ()
{
    char s[MAX];
    char t[MAX];
    int m;
    gets(s);
    scanf("%d",&m);
    while(m>80)
    {
        printf("Error\n");
        scanf("%d ",&m);
    }
    strmcpy(t,s,m);
    printf("%s\n",t);
    return 0;
}
char *strmcpy(char *t, char const *s,int m)
{
    s+=m;
    if(strcpy(t,s))
        return t;
    else 
        return NULL;

}