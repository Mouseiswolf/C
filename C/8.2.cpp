#include<iostream>
#include<cmath>
using namespace std;
#define SIZE 100
#define START 0
int main()
{
    double data[SIZE],ans=0;
    for(int i=START;i<SIZE;i++)
    {
        double a,temp;
        int index1,index2;
        a=2*(i+1);//最高位
        index1=log10f(a+1)+1;//最高位指数
        index2=log10f(a+2)+1;//次高位指数
        temp=a*pow(10,index1+index2)+(a+1)*pow(10,index2)+a+2;//分母
        data[i]=4.0/temp;
        // cout<<temp<<endl;
    }
    for(int i=0;i<SIZE;i++)
    {
        ans+=pow(-1,i)*data[i];
    }
    ans+=3.0;
    printf("%.4lf",ans);
    return 0;
}