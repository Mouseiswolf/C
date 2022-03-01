#include<iostream>
using namespace std;
void m2a(int month);
int main()
{
    int month;
    cin>>month;
    m2a(month);
    return 0;
}
void m2a (int month)
{
    char alpha[12][100]={"January",
                        "February",
                        "March",
                        "April",
                        "May",
                        "June",
                        "July",
                        "August",
                        "September",
                        "October",
                        "November",
                        "December"
                        };
    printf("%s\n",alpha[month-1]);

}
