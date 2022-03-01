#include<iostream>
#define LINE 20
#define ROW 60
using namespace std;
int cellcount(int input[][ROW],int,int);
int main()
{
    int input[LINE][ROW]={0};
    int son[LINE][ROW]={0};
    int x,y=0;
    int generation=0;
    cin>>x>>y;
    while (x!=-1&&y!=-1)
    {
        input[x-1][y-1]=1;
        cin>>x>>y;
    }
    cin>>generation;
    for(int k=0;k<generation;k++)
    {
        for(int i=0;i<LINE;i++)//子代推导
        {
            for(int j=0;j<ROW;j++)
            {
                int num=cellcount(input,i,j);
                if(num<2||num>3)
                    son[i][j]=0;
                else if(num==3)
                    son[i][j]=1;
                else
                    son[i][j]=input[i][j];
            }
        }
    for(int i=0;i<LINE;i++)//迁移数据
    {
        for(int j=0;j<ROW;j++)
        {
            input[i][j]=son[i][j];
        }
    }
    }
    for(int i=0;i<LINE;i++)//输出
    {
        for(int j=0;j<ROW;j++)
        {
            if(input[i][j])
                cout<<'*';
            else
                cout<<'-';
        }
        cout<<endl;
    }
    return 0;
}
int cellcount(int input[][ROW],int x,int y)
{
    int count=0;
    for(int i=x-1;i<x+2;i++)
    {
        for(int j=y-1;j<y+2;j++)
        {
            if(i<0||i>=LINE||j<0||j>=ROW||(i==x&&j==y))
                continue;
            if(input[i][j])
                count++;
        }
    }
    return count;
}
//循环、分支复杂度爆表 注释太少
//我淦