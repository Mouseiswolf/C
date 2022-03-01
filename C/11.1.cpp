#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int x,p,n;
    cin>>x>>p>>n;
    x=x&(unsigned long long int)(pow(2,p+1)-1);//截取从右往左前p位
    x=x>>p-n+1;//舍弃从右往左p-n+1位
    cout<<x;
    return 0;
}