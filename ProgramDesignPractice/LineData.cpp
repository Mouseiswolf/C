#include <iostream>
using namespace std;
int compare(const void *_p,const void *_q)
{
    int *p=(int*)_p;
    int *q=(int*)_q;
    
}
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int n;
        int data[1000][50]={0};
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int j=0;
            int tmp=0;
            while(1)
            {
                cin>>tmp;
                if(tmp==-1)
                    break;
                else
                    data[i][j++]=tmp;
            }
        }
        qsort(data[0],n,sizeof(data[0]),compare);
    }
}