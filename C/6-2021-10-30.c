#include <stdio.h>
double fbnq(int);
int main()
{
    double  sum = 0;
    for (int i = 1; i<=50; i++)
    {
        sum += fbnq(i + 2) / fbnq(i + 1);
    }
    printf("%.2f", sum);
    return 0;
}
double fbnq(int n)
{
    if(1==n||2==n)
        return 1.0;
    return fbnq(n - 1) + fbnq(n - 2);
}