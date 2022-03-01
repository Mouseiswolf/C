#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
void i2a(int num, char str[]);
int main()
{
    int num = 0;
    char str[15];
    cin>>num;
    i2a(num, str);
    puts(str);
    return 0;
}
void i2a(int num,char str[])
{
    int len=(int)log10(num);
    int x=num;
    int i=0;
    for(i=0;i<len;i++)
    {
        str[i]=x/(int)(pow(10,len-i))+'0';
        x=x%(int)(pow(10,len-i));
    }
    str[len]=num%10+'0';
    str[len+1]='\0';
    return;
}