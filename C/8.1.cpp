#include<iostream>
using namespace std;
#define SIZE 5
int main()
{
    double a[SIZE],b[SIZE],sum=0;
    for(int i=0;i<SIZE;i++)
    {
        cin>>a[i];
        b[i]=1/a[i];
        sum+=b[i];
        printf("%.2f ",b[i]);
    }
    printf("\n%.6f",sum);
    return 0;
}