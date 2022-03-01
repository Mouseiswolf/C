#include <stdio.h>
int main()
{
    int y,m,ifly;
    scanf("%d %d",&y,&m);
    if((y%4==0&&y%100!=0)||y%400==0)
        {
            printf("LeapYear ");
            ifly=1;
        }
    else
        {
        printf("CommonYear ");
        ifly=0;
        }
    if(m<=5&&m>=3)
        printf("Spring ");
    else if(m>=6&&m<=8)
        printf("Summer ");
    else if(m>=9&&m<=11)
        printf("Autumn ");
    else
        printf("Winter ");
    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("%d",31);
        break;
    case 4: case 6: case 9: case 11:
        printf("%d",30);
        break;
    case 2:
        printf("%d",28+ifly);
        break;

    default:
        printf("error");
        break;
    }
    return 0;
}
