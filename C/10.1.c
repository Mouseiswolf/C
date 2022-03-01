#include<stdio.h>
#include<string.h>
int isvowel(const char ch)
{
    if( ch=='a'||
        ch=='e'||
        ch=='i'||
        ch=='o'||
        ch=='u')
            return 1;

        return 0;
}
int main()
{
    char str[81];
    fgets(str,80,stdin);
    int n=strlen(str);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(isvowel(str[i])||isvowel(str[i]-'A'+'a'))
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("yes\n");
    else
        printf("no\n");
}
