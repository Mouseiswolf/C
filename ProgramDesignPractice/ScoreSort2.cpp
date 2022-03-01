#include <iostream>
#include <cstring>
using namespace std;
struct Student
{
        int s=0;
        char number[20];
        int ques[10];
        int score=0;
};
int compare(const void *_p,const void *_q)
{
    Student *p=(Student*)_p;
    Student *q=(Student*)_q;
    if(p->score>q->score)
        return -1;
    else if(p->score<q->score)
        return 1;
    else if(strcmp(p->number,q->number)>0)
        return 1;
    else if(strcmp(p->number,q->number)<0)
        return -1;
    else
        return 0;
}
int main()
{
    int t=0;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int n=0;
        int m=0;
        int g=0;
        int passed=0;//及格人数
        int score[11];
        cin>>n>>m>>g;
        Student stu[500];
        for(int i=1;i<=m;i++)
            cin>>score[i];
        for(int i=0;i<n;i++)
        {
            cin>>stu[i].number>>stu[i].s;
            for(int j=0;j<stu[i].s;j++)
            {
                cin>>stu[i].ques[j];
                stu[i].score+=score[stu[i].ques[j]];
            }
            if(stu[i].score>=g)
                passed++;
        }
        qsort(stu,n,sizeof(stu[0]),compare);
        printf("case #%d:\n%d\n",z,passed);
        for(int i=0;i<passed;i++)
        {
            printf("%s %d\n",stu[i].number,stu[i].score);
        }
        
    }
    return 0;
}