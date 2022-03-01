#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
#define MAX 100
char *Input(char **p,int n);
void Sort(char **a,int n);
int main()
{
    char *p[N];
    int n, i;
    scanf("%d", &n);
    getchar();
    //** Input is called here **
    Input(p,n);
    //**
    //** Sort is called here *
    Sort(p, n);
    //**
    for (i = 0; i < n; i++)
        printf("%s\n", p[i]);
    free(*p);
    //**
    return 0;
}
char *Input(char **p,int n)
{
    for(int i=0;i<n;i++)
    {
        p[i]=(char *)malloc(MAX*sizeof(char));
        gets(p[i]);
    }
    return *p;
}
void Sort(char **a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                char *temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}