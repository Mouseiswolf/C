#define __STDC_WANT_LIB_EXT1__ 1
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[101][101];
    char minch[101]={};
    int n;//num of strs
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        gets_s(str[i],100);
        int len=strlen(str[i]);
        minch[i]=str[i][0];
        for(int j=1;j<len;j++)
        {
            if(minch[i]>str[i][j])
                minch[i]=str[i][j];
        }
    }
    for(int i=0;i<=n;i++)
        cout<<minch[i];
    return 0;
}
