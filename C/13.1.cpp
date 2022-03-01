#include<iostream>
#include<string>
using namespace std;
int main()
{
    struct book
    {
        double price;
        char name[100];
        char press[100];
    };
    book bk;
    fgets(bk.name,90,stdin);
    getchar();
    cin>>bk.price;
    fgets(bk.press,90,stdin);
    getchar();
    printf("name is \"%s\", price is $%f, press is \"%s\"\n",bk.name,bk.price,bk.press);
    return 0;
}