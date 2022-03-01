#include <stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        double price;
        char name[100];
        char press[100];
    };
    struct book bk;
    gets(bk.name);
    scanf("%lf",&bk.price);
    getchar();
    gets(bk.press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"\n",bk.name,bk.price,bk.press);
    return 0;
}