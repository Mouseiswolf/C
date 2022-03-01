#include<stdio.h>
int main()
{
    float score,max,min=100;
    int i=1;
    while (1)
    {
        scanf("%f",&score);
        if(score<0)
            break;
        if(max<score)
            max=score;
        if(min>score)
            min=score;
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}
