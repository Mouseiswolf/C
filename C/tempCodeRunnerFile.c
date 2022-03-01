#include<stdio.h>
#include<string.h>
void one(int num);
void ten(int num);
void hrd(int num);
void thsd(int num);
int main()
{
    char num[5];
    memset(num,0,5);
    gets(num);
    int nums[5]={0};
    int n=strlen(num)-1;
    for(int i=4;i>4-strlen(num);i=i-1)
    {
        nums[i]=num[n];
        n--;
    }
    thsd(nums[0]);
    hrd(nums[1]);
    ten(nums[2]);
    one(nums[3]);
    return 0;
}
void one(int num)
{
    
    if(num<4)
    {
        for(int i=0;i<num;i++)
            printf("I");//out ones
    }
    else if(num==4)
    {
        printf("IV");//out 4
    }
    else if(num<9&&num>4)
    {
        printf("V");//5s
        for(int i=0;i<num%5;i++)
            printf("I");//6~8
    }
    else 
    {
        printf("IX");//9
    }
}
void ten(int num)
{
    
    if(num<4)
    {
        for(int i=0;i<num;i++)
            printf("X");
    }
    else if(num==4)
    {
        printf("XL");
    }
    else if(num<9&&num>4)
    {
        printf("L");
        for(int i=0;i<num%5;i++)
            printf("X");
    }
    else 
    {
        printf("XC");
    }
}
void hrd(int num)
{
    
    if(num<4)
    {
        for(int i=0;i<num;i++)
            printf("C");
    }
    else if(num==4)
    {
        printf("CD");
    }
    else if(num<9&&num>4)
    {
        printf("D");
        for(int i=0;i<num%5;i++)
            printf("C");
    }
    else 
    {
        printf("CM");
    }
}
void thsd(int num)
{
    for(int i=0;i<num;i++)
        printf("M");
}