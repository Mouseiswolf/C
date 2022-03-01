#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int x,p,n;
    cin>>x>>p>>n;
    unsigned long long m=pow(2,p+1)-1;
    m=m>>p-n+1;
    m=m<<p-n+1;
    printf("%d\n",x^m);//我淦他C语言数据类型
    return 0;
}
//然而c++只能更重视数据类型