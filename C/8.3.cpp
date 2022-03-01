#include<iostream>
using namespace std;
#define SIZE 5

int main()
{
    float amounts[SIZE]={};
    long dollar[SIZE]={},cents[SIZE]={};
    for(int i=0;i<SIZE;i++)
    {
        cin>>amounts[i];
        dollar[i]=(long)amounts[i];
        cents[i]=(long)(amounts[i]*100+0.01)%100;
        if(cents[i]<10)
            printf("$%ld.%d%ld ",dollar[i],0,cents[i]);//美分小于10应该是出2.03 否则是2.3
        printf("$%ld.%ld ",dollar[i],cents[i]);
    }
    return 0;
}