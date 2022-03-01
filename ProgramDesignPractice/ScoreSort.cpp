#include<iostream>
using namespace std;
struct student
{
    unsigned long long number;
    int score;
};
int compare(const void *_p,const void *_q);
int main()
{
    int n=0;//学生数量
    student stu[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].number>>stu[i].score;
    }
    qsort(stu,n,sizeof(stu[0]),compare);
    for(int i=0;i<n;i++)
    {
        if(stu[i].score<60)
            break;
        cout<<stu[i].number<<' '<<stu[i].score<<endl;    
    }
    return 0;
}
int compare(const void *_p,const void *_q)
{
    student *p=(student*)_p;
    student *q=(student*)_q;
    if(p->score>q->score)
        return -1;
    else if(p->score<q->score)
        return 1;
    else if(p->number>q->number)
        return 1;
    else if(p->number>q->number)
        return -1;
    else
        return 0;
}