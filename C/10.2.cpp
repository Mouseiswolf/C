#include<cstdio>
#include<cstring>
int main()
{
    char str1[81],str2[200];
    scanf("%s",str1);
    scanf("%s",str2);
    int flag=0;
    int len=strlen(str1);
    //怎么有人想在这里用strstr偷懒啊 玩意前面是后面截短不就寄了
    for(int i=0;i<len;i++)
    {
        int count=0;
        for(int j=i,k=0;j-i<len;j++,k++)
        {
            if(str1[k] == str2[j%len] )
                count++;
        }
        if(count==len)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\"%s\" is NOT a rotation of \"%s\"\n",str1,str2);
    }
    else
        printf("\"%s\" is a rotation of \"%s\"\n",str1,str2);
    return 0;
}