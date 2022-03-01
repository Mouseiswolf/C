#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b;
    int i=1;
    while(i<b)
    {

        c=a/i;

        cout<<i<<" "<<c<<endl;
        i++;
    }
    return 0;
}
