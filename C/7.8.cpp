#include<iostream>
using namespace std;
int jc(int);
int main()
{
    int n;
    cin>>n;
    cout<< jc(n);
    return 0;
}
int jc(int n)
{
    if(1==n||0==n)
        return 1;
    int ans=n*jc(n-1);
    return ans%20181111 ;//为了避免溢出 先取余再乘
}