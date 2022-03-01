#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[81];
    gets_s(str,80);
    int len=strlen(str);
    char *p=str+len;
    printf("%c",*p);
    return 0;
}