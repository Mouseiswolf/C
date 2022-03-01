#include<iostream>
using namespace std;
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
int DateToDay(int y,int m,int d)
{
    int day=0,dayofy=0;
    for(int i=1;i<m;i++)
    {
        dayofy+=DayOfMonth(i);
    }
    day=365*(y-1900)+dayofy+d;
    for(int i=1;i<y;i++)
    {
        if(IsLeap(i))
            day++;
    }
    if(IsLeap(y)&&m>2)
        day++;
    
    return day;
}
void day2weekday(int d)
{
    switch (d)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    
    default:
        break;
    }
}
int main()
{
    int y,m,d;
    cin>>y>>m>>d;
    cout<<DateToDay(y,m,d);
    return 0;
}