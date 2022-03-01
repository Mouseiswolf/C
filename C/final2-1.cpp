#include <iostream>
using namespace std;
int main()
{
    int a,b,min;
    cin>>a>>b;
    min=a<b?a:b;
    for(int i=min;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            cout<<i<<endl;
            break;
        }
    }
}