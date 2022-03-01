#include <iostream>
using namespace std;
int main()
{
    struct time
    {
        int h;
        int m;
    };
    typedef struct time time;
    time bus[7]=
    {
        {6,50},
        {8,30},
        {11,50},
        {13,50},
        {16,50},
        {18,0},
        {20,50}
    };
    time ipt;
    scanf("%d:%d",&ipt.h,&ipt.m);
    getchar();
    int isovertime=1;
    for(int i=0;i<7;i++)
    {
        int minutes=60*bus[i].h+bus[i].m;
        int nowmin=60*ipt.h+ipt.m;
        if(nowmin<=minutes)
        {
            cout<<minutes-nowmin<<endl;
            isovertime=0;
            break;
        }
    }
    if(isovertime==1)
        cout<<-1<<endl;
    return 0;
}