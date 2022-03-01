#include <iostream>
#include <cstring>
using namespace std;
struct student
{
    char num[30];//学号
    int qnum[10];//答对题号
    int score=0;
    int ispass=0;
};
int main()
{
    int n,m,g,pass=0;
    cin>>n>>m>>g;
    int weight[11]={0};//每题赋分
    for(int i=1;i<=m;i++)
        cin>>weight[i];
    student stu[10];
    for(int i=0;i<n;i++)
    {
        int count;//答对题数
        cin>>stu[i].num>>count;
        for(int j=0;j<count;j++)
        {
            cin>>stu[i].qnum[j];
            stu[i].score+=weight[stu[i].qnum[j]];
        }
        if(stu[i].score>=g)
            {stu[i].ispass=1; pass++;}
    }
    for(int i=0;i<n;i++)
        {
            int minnum=0;
            for(int j=1;j<n-i;j++)
            {
                if(stu[minnum].score>stu[j].score)
                    minnum=j;
                else if(stu[minnum].score==stu[j].score&&strcmp(stu[minnum].num,stu[j].num)<0)
                    minnum=j;
            }
            student temp;
            temp=stu[n-i];
            stu[n-i]=stu[minnum];
            stu[minnum]=temp;
        }
    cout<<pass<<endl;
    for(int i=0;i<n;i++)
    {
        if(stu[i].ispass==1)
            cout<<stu[i].num<<" "<<stu[i].score<<endl;
    }
    return 0;
}