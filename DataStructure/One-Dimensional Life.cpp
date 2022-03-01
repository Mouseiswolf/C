#include <iostream>
using namespace std;
#define SIZE 60
int count(bool *,int);
int main()
{
    bool line[SIZE+4]={0};//
    bool son[SIZE+4]={0};//
    int x=0;//
    int n=0;//
    cin>>x;//
    while(x!=-1)//
    {
        line[x+1]=true;//
        cin>>x;//
    }
    cin>>n;//
    for(int i=0;i<n;++i)//子代繁衍
    {
        for(int j=2;j<62;++j)//遍历
        {
            switch(count(line,j))//条件判断
            {
                case 3:
                    if(line[j])
                        son[j]=false;//
                    else
                        son[j]=true;//
                    break;
                case 2:
                    son[j]=true;//
                    break;
                case 4:
                    son[j]=line[j];//
                    break;
                default:
                    son[j]=false;//
                    break;
            }
        }
        for(int j=2;j<SIZE-2;++j)//复制
            line[j]=son[j];
    }
    for(int j=2;j<SIZE-2;++j)//输出
    {
        if(line[j])
            cout<<'*';
        else
            cout<<'-';
    }
    return 0;
}
int count(bool *line,int n)
{
    int ans=0;
    for(int i=n-2;i<=n+2;++i)
    {
        if(line[i])
            ++ans;
    }
    ans-=line[n];
    return ans;
}