#include <iostream>
using namespace std;
int compare(const void  *_p,const void  *_q);
int main()
{
    int array[100]={0};
    int no0array[100]={0};
    char a;
    cin>>a;
    int n=0;
    int count=0;//去重后元素个数
    for(int i=0;i<100;i++)
    {
        if(scanf("%d ",&array[i])<1)
            break;
        n++;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(array[i]==array[j])
            {
                array[i]=0;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(array[i])
        {
            no0array[count]=array[i];
            count++;
        }
    }
    qsort(no0array,count,sizeof(no0array[0]),compare);
    int i,step;
    if(a=='A')
    {
        i=0;
    }

}
int compare(const void  *_p,const void  *_q)
{
    int *p=(int*)_p;
    int *q=(int*)_q;
    return *p-*q;
}