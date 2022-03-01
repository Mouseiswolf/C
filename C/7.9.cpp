#include<iostream>
#include<cmath>
using namespace std;
bool IsLeap(int );
int DateToDay(int,int,int);
int DayOfMonth(int );
int main()
{
    int y1,m1,d1,y2,m2,d2,ans;
    cin>>y1>>m1>>d1>>y2>>m2>>d2;
    ans=DateToDay(y1,m1,d1)-DateToDay(y2,m2,d2);
    cout<<"采集时间为"<<fabs(ans)<<"天";
    return 0;
}
int DateToDay(int y,int m,int d)
{
    int day=0,dayofy=0;
    for(int i=1;i<m;i++)
    {
        dayofy+=DayOfMonth(i);
    }
    day=365*y+dayofy+d;
    for(int i=1;i<y;i++)//逐年判断 切莫偷懒 反例：day+=y/4
    {
        if(IsLeap(i))
            day++;
    }
    if(IsLeap(y)&&m>2)
        day++;
    
    return day;
}
bool IsLeap(int y)
{
    if(!(y%400)||(y%4==0&&y%100!=0))
    return 1;
    return 0;
}
int DayOfMonth(int m)
{
    if(2==m)
        return 28;
     
    if(4==m||6==m||9==m||11==m)
        return 30;
    return 31;
}