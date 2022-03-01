#include <stdio.h>
#include <string.h>
struct item
{
    char num[10];
    char date[20];
    int price;
};
typedef struct item item;
void ipt(item *pitm);
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int times=0;times<t;times++)
    {
        item itm[200];
        int n;
        scanf("%d",&n);
        getchar();
        for(int i=0;i<n;i++)
        {
            ipt(&itm[i]);
        }
        for(int i=0;i<n;i++)
    {
        int j;
        int minnum=0;
        for(j=1;j<n-i;j++)
        {
            if(strcmp(itm[minnum].date,itm[j].date)>0)
            {
                minnum=j+1;
            }
            else if(strcmp(itm[minnum].date,itm[j].date)==0&&itm[minnum].price<itm[j].price)
                minnum=j+1;
            else if(strcmp(itm[minnum].date,itm[j].date)==0
                    &&itm[minnum].price==itm[j].price
                    &&strcmp(itm[minnum].num,itm[j].num)<0)
                minnum=j;
        }
        item temp;
        temp=itm[n-i];
        itm[n-i]=itm[minnum];
        itm[minnum]=temp;
    }
        printf("case #%d:\n",times);
        for(int i=0;i<n;i++)
            printf("%s %s %d\n",itm[i].num,itm[i].date,itm[i].price);
    }
    return 0;
}
void ipt (item *pitm)
{
    scanf("%s %s %d",pitm->num,pitm->date,&pitm->price);
    // getchar();
    return;
}
