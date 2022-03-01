#include <stdio.h>
int main()
{
    int t;
    enum weekday{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    enum weekday day[1000];
    int week[1000];
    char person[][10]=
    {
        "F sir",
        "A sir",
        "B sir",
        "C sir",
        "D sir",
        "E sir",
    };
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        scanf("Week%d %u",&week[i],&day[i]);
        getchar();
        int d=(week[i]*7+day[i])%6;
        printf("%s\n",person[d]);

    }
}