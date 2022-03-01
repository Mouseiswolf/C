#include<iostream>
#define SIZE 100
using namespace std;
int main()
{
    double score[SIZE]={},max,min,avg=0;
    int n,maxnum=0,minnum=0;
    cin>>n>>score[0];
    max=score[0];
    min=score[0];
    for(int i=1;i<n;i++)
    {
        cin>>score[i];
        if(max<score[i])
        {
            max=score[i];
            maxnum=i;
        }
        if(min>score[i])
        {
            min=score[i];
            minnum=i;
        }

    }
    for(int i=0;i<n;i++)
    {
        if(maxnum==minnum)
        {
            avg=score[0];//如果常数组 那么下列取值方法会多取一个数 正确做法应该是排序而不是这么偷懒 
            break;
        }
        if(i==maxnum||i==minnum)
            continue;
        avg+=score[i]/(n-2.0);
    }
    
    printf("%.2f",avg);
    return 0;
}