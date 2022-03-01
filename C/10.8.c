//为什么gets——s用不了啊
#include<stdio.h>
#include<string.h>
int main()
{
    char str[101][101];
    char minch[101];
    int n;//num of strs
    scanf("%d ",&n);
    for(int i=0;i<n;i++)//获取每一串最小字母
    {
        gets(str[i]);
        int len=strlen(str[i]);
        minch[i]=str[i][0];
        for(int j=1;j<len;j++)
        {
            if(minch[i]>str[i][j])
                minch[i]=str[i][j];
        }
    }
    for(int i=0;i<n-1;i++)//排序，冒泡
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(minch[j]>minch[j+1])
            {
                char temp=minch[j];
                minch[j]=minch[j+1];
                minch[j+1]=temp;//自己跑VSC就有bug会吃掉一个但是提交上去AC
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%c",minch[i]);//懒
    return 0;
}