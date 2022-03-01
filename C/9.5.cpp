#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
#include<cmath>
int main()
{
    string num;
    int a[10]={0},len;
    // int j=-1;
    getline(cin,num);
    len=num.size();
    for(int i=0;i<10;i++)
    {
        a[num[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i])
            cout<<i<<":"<<a[i]<<endl;
    }
    return 0;
}
//被老师发现偷偷用了C++ 学生生活就结束了吧