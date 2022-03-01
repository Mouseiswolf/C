#include<stdio.h>
int main()
{
    int d,m,y;
    scanf("%d %d %d",&d,&m,&y);
    switch(d)
    {
    case 1: case 21: case 31:
        printf("%dst ",d);
        break;
    case 2: case 22:
        printf("%dnd ",d);
        break;
    case 3: case 23:
        printf("%drd ",d);
        break;
    default:
        printf("%dth ",d);
        break;
    }
    switch(m)
    {
    case 1:
        printf("January ");
        break;
    case 2:
        printf("February ");
        break;
    case 3:
        printf("March ");
        break;
    case 4:
        printf("April ");
        break;
    case 5:
        printf("May ");
        break;
    case 6:
        printf("June ");
        break;
    case 7:
        printf("July ");
        break;
    case 8:
        printf("August ");
        break;
    case 9:
        printf("September ");
        break;
    case 10:
        printf("October ");
        break;
    case 11:
        printf("November ");
        break;
    case 12:
        printf("December ");
        break;
    default:
        break;
    }
    printf("%d",y);
    return 0;
}
